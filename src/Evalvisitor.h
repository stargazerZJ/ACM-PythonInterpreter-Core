#pragma once
#ifndef PYTHON_INTERPRETER_EVALVISITOR_H
#define PYTHON_INTERPRETER_EVALVISITOR_H


#include "Python3ParserBaseVisitor.h"
#include "scope.h"
#include "variable.h"
#include "utils.h"
#include <ranges>


class EvalVisitor : public Python3ParserBaseVisitor {
private:
  NameSpace name_space_;
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
  std::any visitSuite(Python3Parser::SuiteContext *ctx) override;
  std::any visitIf_stmt(Python3Parser::If_stmtContext *ctx) override;
  std::any visitWhile_stmt(Python3Parser::While_stmtContext *ctx) override;
  std::any visitLvalue(Python3Parser::LvalueContext *ctx) override;
  std::any visitAugassign_stmt(Python3Parser::Augassign_stmtContext *ctx) override;
  std::any visitRvalue_tuple(Python3Parser::Rvalue_tupleContext *ctx) override;
  std::any visitAssign_stmt(Python3Parser::Assign_stmtContext *ctx) override;
  std::any visitSimple_stmt(Python3Parser::Simple_stmtContext *ctx) override;
  std::any visitFuncdef_args(Python3Parser::Funcdef_argsContext *ctx) override;
  std::any visitFuncdef(Python3Parser::FuncdefContext *ctx) override;
  std::any visitArglist(Python3Parser::ArglistContext *ctx) override;
  std::any visitSmall_stmt(Python3Parser::Small_stmtContext *ctx) override;
};


#endif//PYTHON_INTERPRETER_EVALVISITOR_H
