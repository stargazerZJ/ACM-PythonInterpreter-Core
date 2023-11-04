#pragma once
#ifndef PYTHON_INTERPRETER_EVALVISITOR_H
#define PYTHON_INTERPRETER_EVALVISITOR_H


#include "Python3ParserBaseVisitor.h"
#include "scope.h"
#include "variable.h"


class EvalVisitor : public Python3ParserBaseVisitor {
private:
  NameSpace name_space;
 public:
  std::any visitAtom(Python3Parser::AtomContext *ctx) override;
  std::any visitFunction_call(Python3Parser::Function_callContext *ctx) override;
};


#endif//PYTHON_INTERPRETER_EVALVISITOR_H
