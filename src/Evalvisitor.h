#pragma once
#ifndef PYTHON_INTERPRETER_EVALVISITOR_H
#define PYTHON_INTERPRETER_EVALVISITOR_H


#include "Python3ParserBaseVisitor.h"
#include "scope.h"
#include "variable.h"
#include "utils.h"


class EvalVisitor : public Python3ParserBaseVisitor {
private:
  NameSpace name_space;
 public:
  std::any visitAtom(Python3Parser::AtomContext *ctx) override;
  std::any visitFunction_call(Python3Parser::Function_callContext *ctx) override;
  std::any visitLvalue_tuple(Python3Parser::Lvalue_tupleContext *ctx) override;
  std::any visitFactor(Python3Parser::FactorContext *ctx) override;
  std::any visitTerm(Python3Parser::TermContext *ctx) override;
  std::any visitArith_expr(Python3Parser::Arith_exprContext *ctx) override;
  std::any visitComparison(Python3Parser::ComparisonContext *ctx) override;
  std::any visitNot_test(Python3Parser::Not_testContext *ctx) override;
  std::any visitAnd_test(Python3Parser::And_testContext *ctx) override;
  std::any visitOr_test(Python3Parser::Or_testContext *ctx) override;
  std::any visitBreak_stmt(Python3Parser::Break_stmtContext *ctx) override;
  std::any visitContinue_stmt(Python3Parser::Continue_stmtContext *ctx) override;
  std::any visitReturn_stmt(Python3Parser::Return_stmtContext *ctx) override;
};


#endif//PYTHON_INTERPRETER_EVALVISITOR_H
