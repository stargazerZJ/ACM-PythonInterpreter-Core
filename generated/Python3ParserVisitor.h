
// Generated from Python3Parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "Python3Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Python3Parser.
 */
class  Python3ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Python3Parser.
   */
    virtual std::any visitFile_input(Python3Parser::File_inputContext *context) = 0;

    virtual std::any visitStmt(Python3Parser::StmtContext *context) = 0;

    virtual std::any visitCompound_stmt(Python3Parser::Compound_stmtContext *context) = 0;

    virtual std::any visitIf_stmt(Python3Parser::If_stmtContext *context) = 0;

    virtual std::any visitWhile_stmt(Python3Parser::While_stmtContext *context) = 0;

    virtual std::any visitSuite(Python3Parser::SuiteContext *context) = 0;

    virtual std::any visitFuncdef(Python3Parser::FuncdefContext *context) = 0;

    virtual std::any visitFuncdef_args(Python3Parser::Funcdef_argsContext *context) = 0;

    virtual std::any visitFuncdef_arg(Python3Parser::Funcdef_argContext *context) = 0;

    virtual std::any visitSimple_stmt(Python3Parser::Simple_stmtContext *context) = 0;

    virtual std::any visitSmall_stmt(Python3Parser::Small_stmtContext *context) = 0;

    virtual std::any visitFlow_stmt(Python3Parser::Flow_stmtContext *context) = 0;

    virtual std::any visitBreak_stmt(Python3Parser::Break_stmtContext *context) = 0;

    virtual std::any visitContinue_stmt(Python3Parser::Continue_stmtContext *context) = 0;

    virtual std::any visitReturn_stmt(Python3Parser::Return_stmtContext *context) = 0;

    virtual std::any visitExpr_stmt(Python3Parser::Expr_stmtContext *context) = 0;

    virtual std::any visitRvalue_tuple(Python3Parser::Rvalue_tupleContext *context) = 0;

    virtual std::any visitAssign_stmt(Python3Parser::Assign_stmtContext *context) = 0;

    virtual std::any visitAugassign_stmt(Python3Parser::Augassign_stmtContext *context) = 0;

    virtual std::any visitAugassign(Python3Parser::AugassignContext *context) = 0;

    virtual std::any visitExpr(Python3Parser::ExprContext *context) = 0;

    virtual std::any visitOr_test(Python3Parser::Or_testContext *context) = 0;

    virtual std::any visitAnd_test(Python3Parser::And_testContext *context) = 0;

    virtual std::any visitNot_test(Python3Parser::Not_testContext *context) = 0;

    virtual std::any visitComparison(Python3Parser::ComparisonContext *context) = 0;

    virtual std::any visitComp_op(Python3Parser::Comp_opContext *context) = 0;

    virtual std::any visitArith_expr(Python3Parser::Arith_exprContext *context) = 0;

    virtual std::any visitAddorsub_op(Python3Parser::Addorsub_opContext *context) = 0;

    virtual std::any visitTerm(Python3Parser::TermContext *context) = 0;

    virtual std::any visitMuldivmod_op(Python3Parser::Muldivmod_opContext *context) = 0;

    virtual std::any visitFactor(Python3Parser::FactorContext *context) = 0;

    virtual std::any visitAtom(Python3Parser::AtomContext *context) = 0;

    virtual std::any visitArglist(Python3Parser::ArglistContext *context) = 0;

    virtual std::any visitArgument(Python3Parser::ArgumentContext *context) = 0;

    virtual std::any visitFunction_call(Python3Parser::Function_callContext *context) = 0;

    virtual std::any visitLvalue_tuple(Python3Parser::Lvalue_tupleContext *context) = 0;

    virtual std::any visitLvalue(Python3Parser::LvalueContext *context) = 0;

    virtual std::any visitBuiltin_function(Python3Parser::Builtin_functionContext *context) = 0;

    virtual std::any visitPrint_function(Python3Parser::Print_functionContext *context) = 0;

    virtual std::any visitInt_function(Python3Parser::Int_functionContext *context) = 0;

    virtual std::any visitBool_function(Python3Parser::Bool_functionContext *context) = 0;

    virtual std::any visitStr_function(Python3Parser::Str_functionContext *context) = 0;

    virtual std::any visitFloat_function(Python3Parser::Float_functionContext *context) = 0;


};

