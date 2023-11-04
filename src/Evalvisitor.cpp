#include "Evalvisitor.h"
std::any EvalVisitor::visitAtom(Python3Parser::AtomContext *ctx) {
  if (ctx->NAME()) {
    return name_space.get(ctx->NAME()->toString());
  } else if (ctx->NUMBER()) {
    auto str = ctx->NUMBER()->toString();
    // if the string contains '.', it is a float
    if (str.find('.') != std::string::npos) {
      return std::make_shared<VariableBase>(PyFloat(std::stod(str)));
    } else {
      return std::make_shared<VariableBase>(PyInt(str));
    }
  } else if (auto strings = ctx->STRING(); !strings.empty()) {
    auto res = std::string();
    for (auto string : strings) {
      auto str = string->toString();
      res += str.substr(1, str.size() - 2);
    }
  } else if (ctx->TRUE()) {
    return std::make_shared<VariableBase>(PyBool(true));
  } else if (ctx->FALSE()) {
    return std::make_shared<VariableBase>(PyBool(false));
  } else if (ctx->NONE()) {
    return std::make_shared<VariableBase>(PyNone());
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
    // currently only support printing one argument
    auto arg = visit(ctx->arglist()->argument(0)->expr());
    std::cout << std::any_cast<VariablePtr>(arg)->toString().value << std::endl;
    return std::make_shared<VariableBase>(PyNone());
  }
  throw std::runtime_error("unimplemented");
}
