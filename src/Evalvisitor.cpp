#include "Evalvisitor.h"
std::any EvalVisitor::visitAtom(Python3Parser::AtomContext *ctx) {
//  std::cerr << "visitAtom" << std::endl;
//  std::cerr << "Code :" << ctx->getText() << std::endl;
  if (ctx->NAME()) {
    const VariablePtr &ptr = name_space_.get(ctx->NAME()->toString());

    return ptr;
  } else if (ctx->NUMBER()) {
    auto str = ctx->NUMBER()->toString();
    // if the string contains '.', it is a float
    if (str.find('.') != std::string::npos) {
      return static_cast<VariablePtr>(std::make_shared<PyFloat>(std::stod(str)));
    } else {
      return static_cast<VariablePtr>(std::make_shared<PyInt>(str));
    }
  } else if (auto strings = ctx->STRING(); !strings.empty()) {
    auto res = std::string();
    for (auto string : strings) {
      auto str = string->toString();
      str = str.substr(1, str.size() - 2);
      res += expandControlCharacters(str);
    }
    return static_cast<VariablePtr>(std::make_shared<PyString>(res));
  } else if (ctx->TRUE()) {
    return static_cast<VariablePtr>(std::make_shared<PyBool>(true));
  } else if (ctx->FALSE()) {
    return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
  } else if (ctx->NONE()) {
    return static_cast<VariablePtr>(std::make_shared<PyNone>());
  } else if (ctx->function_call()) {
    return visitFunction_call(ctx->function_call());
  } else if (ctx->expr()) {
    return visitExpr(ctx->expr());
  }
  throw std::runtime_error("parse error in atom");
}
std::any EvalVisitor::visitFunction_call(Python3Parser::Function_callContext *ctx) {
  if (ctx->lvalue()) {
    auto name = std::any_cast<std::string>(visit(ctx->lvalue()));
    auto variable = name_space_.get(name);
    auto func = std::dynamic_pointer_cast<PyFunc>(variable);
    if (func == nullptr) {
      throw std::runtime_error("TypeError: " + variable->typeName() + " object is not callable");
    }
    auto call_args = std::any_cast<FunctionCallArgs>(visit(ctx->arglist()));
    auto args = func->matchParams(call_args);
    auto &scope = name_space_.addScope();
//    for(auto name : func->args.names) {
//      std::cerr << "name" <<
//    }
    for (size_t i = 0; i < args.size(); ++i) {
//      std::cerr << "Argument Assign: " << func->args.names[i] << " = " << args[i]->toString().value
//                << std::endl;
//      scope[func->args.names[i]] = args[i];
      name_space_.assign(func->args.names[i], args[i]);
    }
//    std::cerr << name_space_.printVariables();
    auto res = visit(func->body);
    name_space_.popScope();
    if (auto py_flow = std::any_cast<PyFlow>(&res)) {
      if (py_flow->type == PyFlow::Type::RETURN) {
        return py_flow->value;
      } else if (py_flow->type == PyFlow::Type::BREAK) {
        throw std::runtime_error("SyntaxError: 'break' outside loop");
      } else if (py_flow->type == PyFlow::Type::CONTINUE) {
        throw std::runtime_error("SyntaxError: 'continue' not properly in loop");
      }
      return nullptr;
    }
    return static_cast<VariablePtr>(std::make_shared<PyNone>());
  }
  auto builtin = ctx->builtin_function();
  if (builtin->print_function()) {
    auto arg_list = ctx->arglist()->argument();
    for (auto arg : arg_list) {
      if (arg->NAME()) {
        throw std::runtime_error(
            "TypeError: print() got an unexpected keyword argument" + arg->NAME()->toString());
      }
      auto res = visit(arg->expr());
      std::cout << std::any_cast<VariablePtr>(res)->toString().value << " ";
    }
    std::cout << std::endl;
    return std::make_shared<VariableBase>(PyNone());
  }
  if (ctx->arglist()->argument().size() != 1) {
    // other builtin functions must have only one argument
    throw std::runtime_error(
        "TypeError: " + builtin->getText() + "() takes 1 positional argument ("
            + std::to_string(ctx->arglist()->argument().size()) + " given)");
  }
//  auto arg = visit(ctx->arglist()->argument(0)->expr());
  auto arg = std::any_cast<VariablePtr>(visit(ctx->arglist()->argument(0)->expr()));
  if (builtin->int_function()) {
    return static_cast<VariablePtr>(std::make_shared<PyInt>(arg->toInt()));
  }
  if (builtin->float_function()) {
    return static_cast<VariablePtr>(std::make_shared<PyFloat>(arg->toFloat()));
  }
  if (builtin->str_function()) {
    return static_cast<VariablePtr>(std::make_shared<PyString>(arg->toString()));
  }
  if (builtin->bool_function()) {
    return static_cast<VariablePtr>(std::make_shared<PyBool>(arg->toBool()));
  }
  throw std::runtime_error("parse error in function_call");
}
std::any EvalVisitor::visitLvalue_tuple(Python3Parser::Lvalue_tupleContext *ctx) {
  if (ctx->lvalue_tuple()) {
    return visitLvalue_tuple(ctx->lvalue_tuple());
  } else {
    if (ctx->COMMA().empty()) {
      return visitLvalue(ctx->lvalue(0));
    }
    auto lvalues = ctx->lvalue();
    auto res = lvalueTuple();
    res.reserve(lvalues.size());
    for (auto lvalue : lvalues) {
      res.emplace_back(std::any_cast<std::string>(visitLvalue(lvalue)));
    }
    return res;
  }
}
std::any EvalVisitor::visitFactor(Python3Parser::FactorContext *ctx) {
  if (ctx->MINUS()) {
    auto res = std::any_cast<VariablePtr>(visit(ctx->factor()));
    if (res->isNumeric()) {
      return res->mul(PyInt(-1));
    }
    throw std::runtime_error("TypeError: bad operand type for unary -: " + res->typeName());
  }
  if (ctx->ADD()) {
    auto res = std::any_cast<VariablePtr>(visit(ctx->factor()));
    if (res->isNumeric()) {
      return res;
    }
    throw std::runtime_error("TypeError: bad operand type for unary +: " + res->typeName());
  }
  return visit(ctx->atom());
}
std::any EvalVisitor::visitTerm(Python3Parser::TermContext *ctx) {
  auto operators = ctx->muldivmod_op();
  if (operators.empty()) {
    return visit(ctx->factor(0));
  }
  auto res = std::any_cast<VariablePtr>(visit(ctx->factor(0)));
  size_t i = 0;
  for (auto op : operators) {
    auto rhs = std::any_cast<VariablePtr>(visit(ctx->factor(i + 1)));
    if (op->STAR()) {
      res = res->mul(*rhs);
    } else if (op->DIV()) {
      res = res->div(*rhs);
    } else if (op->IDIV()) {
      res = res->floor_div(*rhs);
    } else if (op->MOD()) {
      res = res->mod(*rhs);
    } else {
      throw std::runtime_error("parse error in term");
    }
    ++i;
  }
  return res;
}
std::any EvalVisitor::visitArith_expr(Python3Parser::Arith_exprContext *ctx) {
  auto operators = ctx->addorsub_op();
  if (operators.empty()) {
    return visit(ctx->term(0));
  }
  auto res = std::any_cast<VariablePtr>(visit(ctx->term(0)));
  size_t i = 0;
  for (auto op : operators) {
    auto rhs = std::any_cast<VariablePtr>(visit(ctx->term(i + 1)));
    if (op->ADD()) {
      res = res->add(*rhs);
    } else if (op->MINUS()) {
      res = res->sub(*rhs);
    } else {
      throw std::runtime_error("parse error in arith_expr");
    }
    ++i;
  }
  return res;
}
std::any EvalVisitor::visitComparison(Python3Parser::ComparisonContext *ctx) {
  auto operators = ctx->comp_op();
  if (operators.empty()) {
    return visit(ctx->arith_expr(0));
  }
  auto lhs = std::any_cast<VariablePtr>(visit(ctx->arith_expr(0)));
  size_t i = 0;
  for (auto op : operators) {
    auto rhs = std::any_cast<VariablePtr>(visit(ctx->arith_expr(i + 1)));
    if (op->LESS_THAN()) {
      if (lhs->lessThan(*rhs)) {
        lhs = rhs;
      } else {
        return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
      }
    } else if (op->GREATER_THAN()) {
      if (rhs->lessThan(*lhs)) {
        lhs = rhs;
      } else {
        return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
      }
    } else if (op->EQUALS()) {
      if (lhs->equal(*rhs)) {
        lhs = rhs;
      } else {
        return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
      }
    } else if (op->GT_EQ()) {
      if (!lhs->lessThan(*rhs)) {
        lhs = rhs;
      } else {
        return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
      }
    } else if (op->LT_EQ()) {
      if (!rhs->lessThan(*lhs)) {
        lhs = rhs;
      } else {
        return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
      }
    } else if (op->NOT_EQ_2()) {
      if (!lhs->equal(*rhs)) {
        lhs = rhs;
      } else {
        return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
      }
    } else {
      throw std::runtime_error("parse error in comparison");
    }
    ++i;
  }
  return static_cast<VariablePtr>(std::make_shared<PyBool>(true));
}
std::any EvalVisitor::visitNot_test(Python3Parser::Not_testContext *ctx) {
  if (ctx->NOT()) {
    auto res = std::any_cast<VariablePtr>(visit(ctx->not_test()));
    return static_cast<VariablePtr>(std::make_shared<PyBool>(!res->toBool().value));
  }
  return visit(ctx->comparison());
}
std::any EvalVisitor::visitAnd_test(Python3Parser::And_testContext *ctx) {
  auto operators = ctx->AND();
  if (operators.empty()) {
    return visit(ctx->not_test(0));
  }
  auto terms = ctx->not_test();
  for (auto term : terms) {
    auto res = std::any_cast<VariablePtr>(visit(term));
    if (!res->toBool().value) {
      return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
    }
  }
  return static_cast<VariablePtr>(std::make_shared<PyBool>(true));
}
std::any EvalVisitor::visitOr_test(Python3Parser::Or_testContext *ctx) {
  auto operators = ctx->OR();
  if (operators.empty()) {
    return visit(ctx->and_test(0));
  }
  auto terms = ctx->and_test();
  for (auto term : terms) {
    auto res = std::any_cast<VariablePtr>(visit(term));
    if (res->toBool().value) {
      return static_cast<VariablePtr>(std::make_shared<PyBool>(true));
    }
  }
  return static_cast<VariablePtr>(std::make_shared<PyBool>(false));
}
std::any EvalVisitor::visitBreak_stmt(Python3Parser::Break_stmtContext *ctx) {
  return PyFlow(PyFlow::Type::BREAK);
}
std::any EvalVisitor::visitContinue_stmt(Python3Parser::Continue_stmtContext *ctx) {
  return PyFlow(PyFlow::Type::CONTINUE);
}
std::any EvalVisitor::visitReturn_stmt(Python3Parser::Return_stmtContext *ctx) {
  if (ctx->rvalue_tuple()) {
    return PyFlow(PyFlow::Type::RETURN, visit(ctx->rvalue_tuple()));
  }
  return PyFlow(PyFlow::Type::RETURN, static_cast<VariablePtr>(std::make_shared<PyNone>()));
}
std::any EvalVisitor::visitSuite(Python3Parser::SuiteContext *ctx) {
  if (ctx->simple_stmt()) {
    return visit(ctx->simple_stmt());
  }
  auto statements = ctx->stmt();
  for (auto stmt : statements) {
    auto res = visit(stmt);
    if (std::any_cast<PyFlow>(&res)) {
      return res;
    }
  }
  return nullptr;
}
std::any EvalVisitor::visitIf_stmt(Python3Parser::If_stmtContext *ctx) {
  auto tests = ctx->expr();
  auto suites = ctx->suite();
  for (size_t i = 0; i < tests.size(); ++i) {
    auto res = std::any_cast<VariablePtr>(visit(tests[i]));
    if (res->toBool().value) {
      return visit(suites[i]);
    }
  }
  if (ctx->ELSE()) {
    return visit(suites.back());
  }
  return nullptr;
}
std::any EvalVisitor::visitWhile_stmt(Python3Parser::While_stmtContext *ctx) {
  auto test = ctx->expr();
  auto suite = ctx->suite();
  while (true) {
    auto res = std::any_cast<VariablePtr>(visit(test));
    if (!res->toBool().value) {
      break;
    }
    auto flow = visit(suite);
    if (auto py_flow = std::any_cast<PyFlow>(&flow)) {
      if (py_flow->type == PyFlow::Type::BREAK) {
        break;
      }
      if (py_flow->type == PyFlow::Type::CONTINUE) {
        continue;
      }
      return flow;
    }
  }
  return nullptr;
}
std::any EvalVisitor::visitLvalue(Python3Parser::LvalueContext *ctx) {
  if (ctx->lvalue()) {
    return visitLvalue(ctx->lvalue());
  } else {
    return ctx->NAME()->toString();
  }
}
std::any EvalVisitor::visitAugassign_stmt(Python3Parser::Augassign_stmtContext *ctx) {
  auto lvalue = std::any_cast<std::string>(visit(ctx->lvalue()));
  auto rhs = std::any_cast<VariablePtr>(visit(ctx->expr()));
  auto lhs = name_space_.get(lvalue);
  if (ctx->augassign()->ADD_ASSIGN()) {
    name_space_.assign(lvalue, lhs->add(*rhs));
  } else if (ctx->augassign()->SUB_ASSIGN()) {
    name_space_.assign(lvalue, lhs->sub(*rhs));
  } else if (ctx->augassign()->MULT_ASSIGN()) {
    name_space_.assign(lvalue, lhs->mul(*rhs));
  } else if (ctx->augassign()->DIV_ASSIGN()) {
    name_space_.assign(lvalue, lhs->div(*rhs));
  } else if (ctx->augassign()->IDIV_ASSIGN()) {
    name_space_.assign(lvalue, lhs->floor_div(*rhs));
  } else if (ctx->augassign()->MOD_ASSIGN()) {
    name_space_.assign(lvalue, lhs->mod(*rhs));
  } else {
    throw std::runtime_error("parse error in augassign_stmt");
  }
//  std::cerr << name_space_.printVariables();
  return nullptr;
}
std::any EvalVisitor::visitRvalue_tuple(Python3Parser::Rvalue_tupleContext *ctx) {
  if (ctx->COMMA().empty()) {
    return visit(ctx->expr(0));
  }
  auto expressions = ctx->expr();
  auto res = std::vector<VariablePtr>();
  res.reserve(expressions.size());
  for (auto expr : expressions) {
    res.push_back(std::any_cast<VariablePtr>(visit(expr)));
  }
  return static_cast<VariablePtr>(std::make_shared<PyTuple>(res));
}
std::any EvalVisitor::visitAssign_stmt(Python3Parser::Assign_stmtContext *ctx) {
  auto rhs = std::any_cast<VariablePtr>(visit(ctx->rvalue_tuple()));
  auto lvalues = ctx->lvalue_tuple();
  for (auto lvalue_context : std::ranges::reverse_view(lvalues)) {
    auto lvalue = visit(lvalue_context);
    if (auto lhs = std::any_cast<std::string>(&lvalue)) {
      name_space_.assign(*lhs, rhs);
      rhs = name_space_.get(*lhs);
    } else {
      auto lhs_tuple = std::any_cast<lvalueTuple>(lvalue);
      name_space_.assign(lhs_tuple, rhs);
      rhs = name_space_.get(lhs_tuple);
    }
  }
//  std::cerr << name_space_.printVariables();
  return nullptr;
}
std::any EvalVisitor::visitSimple_stmt(Python3Parser::Simple_stmtContext *ctx) {
  return visit(ctx->small_stmt());
}
std::any EvalVisitor::visitFuncdef_args(Python3Parser::Funcdef_argsContext *ctx) {
  auto definitions = ctx->funcdef_arg();
  PyFunc::Args args(definitions.size());
  bool has_non_default = false;
  size_t i = 0;
  for (auto definition : definitions) {
    args.names[i] = definition->NAME()->toString();
    if (definition->expr()) {
      has_non_default = true;
      args.default_value[i] = std::any_cast<VariablePtr>(visit(definition->expr()));
    } else {
      if (has_non_default) {
        throw std::runtime_error("SyntaxError: non-default argument follows default argument");
      }
      ++args.min_args;
    }
    ++i;
  }
  return args;
}
std::any EvalVisitor::visitFuncdef(Python3Parser::FuncdefContext *ctx) {
  auto name = ctx->NAME()->toString();
  auto args = std::any_cast<PyFunc::Args>(visit(ctx->funcdef_args()));
  auto body = ctx->suite();
  auto func = static_cast<VariablePtr>(std::make_shared<PyFunc>(name, args, body));
  name_space_.assign(name, func);
  return nullptr;
}
std::any EvalVisitor::visitArglist(Python3Parser::ArglistContext *ctx) {
  auto arguments = ctx->argument();
  auto res = FunctionCallArgs();
  bool has_keyword = false;
  for (auto argument : arguments) {
    if (argument->NAME()) {
      has_keyword = true;
      res.kwargs[argument->NAME()->toString()] =
          std::any_cast<VariablePtr>(visit(argument->expr()));
    } else {
      if (has_keyword) {
        throw std::runtime_error("SyntaxError: positional argument follows keyword argument");
      }
      res.args.push_back(std::any_cast<VariablePtr>(visit(argument->expr())));
    }
  }
  return res;
}
std::any EvalVisitor::visitSmall_stmt(Python3Parser::Small_stmtContext *ctx) {
//  std::cerr << "executing: " << ctx->getText() << std::endl;
//  std::cerr << name_space_.printVariables();
  return Python3ParserBaseVisitor::visitSmall_stmt(ctx);
}
