
// Generated from Python3Parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "Python3ParserVisitor.h"


/**
 * This class provides an empty implementation of Python3ParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Python3ParserBaseVisitor : public Python3ParserVisitor {
public:

  virtual std::any visitFile_input(Python3Parser::File_inputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(Python3Parser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompound_stmt(Python3Parser::Compound_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_stmt(Python3Parser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_stmt(Python3Parser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuite(Python3Parser::SuiteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncdef(Python3Parser::FuncdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncdef_args(Python3Parser::Funcdef_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncdef_arg(Python3Parser::Funcdef_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_stmt(Python3Parser::Simple_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSmall_stmt(Python3Parser::Small_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlow_stmt(Python3Parser::Flow_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreak_stmt(Python3Parser::Break_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinue_stmt(Python3Parser::Continue_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_stmt(Python3Parser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_stmt(Python3Parser::Expr_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRvalue_tuple(Python3Parser::Rvalue_tupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign_stmt(Python3Parser::Assign_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAugassign_stmt(Python3Parser::Augassign_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAugassign(Python3Parser::AugassignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(Python3Parser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr_test(Python3Parser::Or_testContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnd_test(Python3Parser::And_testContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNot_test(Python3Parser::Not_testContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(Python3Parser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComp_op(Python3Parser::Comp_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArith_expr(Python3Parser::Arith_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddorsub_op(Python3Parser::Addorsub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(Python3Parser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMuldivmod_op(Python3Parser::Muldivmod_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(Python3Parser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(Python3Parser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArglist(Python3Parser::ArglistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument(Python3Parser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call(Python3Parser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvalue_tuple(Python3Parser::Lvalue_tupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvalue(Python3Parser::LvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuiltin_function(Python3Parser::Builtin_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_function(Python3Parser::Print_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt_function(Python3Parser::Int_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBool_function(Python3Parser::Bool_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStr_function(Python3Parser::Str_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloat_function(Python3Parser::Float_functionContext *ctx) override {
    return visitChildren(ctx);
  }


};

