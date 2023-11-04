#include "Evalvisitor.h"
std::any EvalVisitor::visitAtom(Python3Parser::AtomContext *ctx) {
//  std::cerr << "visitAtom" << std::endl;
//  std::cerr << "Code :" << ctx->getText() << std::endl;
  if (ctx->NAME()) {
    return name_space.get(ctx->NAME()->toString());
  } else if (ctx->NUMBER()) {
    auto str = ctx->NUMBER()->toString();
    // if the string contains '.', it is a float
    if (str.find('.') != std::string::npos) {
      return static_cast<VariablePtr>(std::make_shared<PyFloat>(std::stod(str)));
    } else {
//      std::cerr << "The type of atom is int" << std::endl;
//      auto test = PyInt(str);
//      std::cerr << "Value : " << test.toString().value << std::endl;
// auto test_shared = std::make_shared<VariableBase>(test);
//      auto test_shared = static_cast<VariablePtr>(std::make_shared<PyInt>(test));
//      std::cerr << "Cast to shared_ptr" << std::endl;
//      std::cerr << "Value : " << test_shared->toString().value << std::endl;
//      auto test_any = std::any(test_shared);
//      auto test_reconstruct = std::any_cast<VariablePtr>(test_any);
//      std::cerr << "Cast to any" << std::endl;
//      std::cerr << "Value : " << test_reconstruct->toString().value << std::endl;
      return static_cast<VariablePtr>(std::make_shared<PyInt>(str));
    }
  } else if (auto strings = ctx->STRING(); !strings.empty()) {
    auto res = std::string();
    for (auto string : strings) {
      auto str = string->toString();
      str = str.substr(1, str.size() - 2);
      // convert control characters into their corresponding characters
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
    // unimplemented
    throw std::runtime_error("unimplemented");
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
  auto lvalues = ctx->lvalue();
  auto res = lvalueTuple();
  res.reserve(lvalues.size());
  for (auto lvalue : lvalues) {
    res.emplace_back(lvalue->NAME()->toString());
  }
  return res;
}
std::any EvalVisitor::visitFactor(Python3Parser::FactorContext *ctx) {
  if (ctx->MINUS()) {
    auto res = std::any_cast<VariablePtr>(visit(ctx->atom()));
    if (res->isNumeric()) {
      return res->mul(PyInt(-1));
    }
    throw std::runtime_error("TypeError: bad operand type for unary -: " + res->typeName());
  }
  if (ctx->ADD()) {
    auto res = std::any_cast<VariablePtr>(visit(ctx->atom()));
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
//  std::cerr << "lhs->toString().value : " << lhs->toString().value << std::endl;
//  std::cerr << "Return true" << std::endl;
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
  return PyFlow(PyFlow::Type::RETURN);
}
