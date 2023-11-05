
// Generated from Python3Parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  Python3Parser : public antlr4::Parser {
public:
  enum {
    INDENT = 1, DEDENT = 2, STRING = 3, NUMBER = 4, INTEGER = 5, DEF = 6, 
    RETURN = 7, IF = 8, ELIF = 9, ELSE = 10, WHILE = 11, FOR = 12, IN = 13, 
    OR = 14, AND = 15, NOT = 16, NONE = 17, TRUE = 18, FALSE = 19, CONTINUE = 20, 
    BREAK = 21, PRINT = 22, INT_TYPE = 23, FLOAT_TYPE = 24, STRING_TYPE = 25, 
    BOOL_TYPE = 26, NEWLINE = 27, NAME = 28, STRING_LITERAL = 29, BYTES_LITERAL = 30, 
    DECIMAL_INTEGER = 31, OCT_INTEGER = 32, HEX_INTEGER = 33, BIN_INTEGER = 34, 
    FLOAT_NUMBER = 35, IMAG_NUMBER = 36, DOT = 37, ELLIPSIS = 38, STAR = 39, 
    OPEN_PAREN = 40, CLOSE_PAREN = 41, COMMA = 42, COLON = 43, SEMI_COLON = 44, 
    POWER = 45, ASSIGN = 46, OPEN_BRACK = 47, CLOSE_BRACK = 48, OR_OP = 49, 
    XOR = 50, AND_OP = 51, LEFT_SHIFT = 52, RIGHT_SHIFT = 53, ADD = 54, 
    MINUS = 55, DIV = 56, MOD = 57, IDIV = 58, NOT_OP = 59, OPEN_BRACE = 60, 
    CLOSE_BRACE = 61, LESS_THAN = 62, GREATER_THAN = 63, EQUALS = 64, GT_EQ = 65, 
    LT_EQ = 66, NOT_EQ_1 = 67, NOT_EQ_2 = 68, AT = 69, ARROW = 70, ADD_ASSIGN = 71, 
    SUB_ASSIGN = 72, MULT_ASSIGN = 73, AT_ASSIGN = 74, DIV_ASSIGN = 75, 
    MOD_ASSIGN = 76, AND_ASSIGN = 77, OR_ASSIGN = 78, XOR_ASSIGN = 79, LEFT_SHIFT_ASSIGN = 80, 
    RIGHT_SHIFT_ASSIGN = 81, POWER_ASSIGN = 82, IDIV_ASSIGN = 83, SKIP_ = 84, 
    UNKNOWN_CHAR = 85
  };

  enum {
    RuleFile_input = 0, RuleStmt = 1, RuleCompound_stmt = 2, RuleIf_stmt = 3, 
    RuleWhile_stmt = 4, RuleSuite = 5, RuleFuncdef = 6, RuleFuncdef_args = 7, 
    RuleFuncdef_arg = 8, RuleSimple_stmt = 9, RuleSmall_stmt = 10, RuleFlow_stmt = 11, 
    RuleBreak_stmt = 12, RuleContinue_stmt = 13, RuleReturn_stmt = 14, RuleExpr_stmt = 15, 
    RuleRvalue_tuple = 16, RuleAssign_stmt = 17, RuleAugassign_stmt = 18, 
    RuleAugassign = 19, RuleExpr = 20, RuleOr_test = 21, RuleAnd_test = 22, 
    RuleNot_test = 23, RuleComparison = 24, RuleComp_op = 25, RuleArith_expr = 26, 
    RuleAddorsub_op = 27, RuleTerm = 28, RuleMuldivmod_op = 29, RuleFactor = 30, 
    RuleAtom = 31, RuleArglist = 32, RuleArgument = 33, RuleFunction_call = 34, 
    RuleLvalue_tuple = 35, RuleLvalue = 36, RuleBuiltin_function = 37, RulePrint_function = 38, 
    RuleInt_function = 39, RuleBool_function = 40, RuleStr_function = 41, 
    RuleFloat_function = 42
  };

  explicit Python3Parser(antlr4::TokenStream *input);

  Python3Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Python3Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class File_inputContext;
  class StmtContext;
  class Compound_stmtContext;
  class If_stmtContext;
  class While_stmtContext;
  class SuiteContext;
  class FuncdefContext;
  class Funcdef_argsContext;
  class Funcdef_argContext;
  class Simple_stmtContext;
  class Small_stmtContext;
  class Flow_stmtContext;
  class Break_stmtContext;
  class Continue_stmtContext;
  class Return_stmtContext;
  class Expr_stmtContext;
  class Rvalue_tupleContext;
  class Assign_stmtContext;
  class Augassign_stmtContext;
  class AugassignContext;
  class ExprContext;
  class Or_testContext;
  class And_testContext;
  class Not_testContext;
  class ComparisonContext;
  class Comp_opContext;
  class Arith_exprContext;
  class Addorsub_opContext;
  class TermContext;
  class Muldivmod_opContext;
  class FactorContext;
  class AtomContext;
  class ArglistContext;
  class ArgumentContext;
  class Function_callContext;
  class Lvalue_tupleContext;
  class LvalueContext;
  class Builtin_functionContext;
  class Print_functionContext;
  class Int_functionContext;
  class Bool_functionContext;
  class Str_functionContext;
  class Float_functionContext; 

  class  File_inputContext : public antlr4::ParserRuleContext {
  public:
    File_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_inputContext* file_input();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_stmtContext *simple_stmt();
    Compound_stmtContext *compound_stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Compound_stmtContext : public antlr4::ParserRuleContext {
  public:
    Compound_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_stmtContext *if_stmt();
    While_stmtContext *while_stmt();
    FuncdefContext *funcdef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_stmtContext* compound_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<SuiteContext *> suite();
    SuiteContext* suite(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELIF();
    antlr4::tree::TerminalNode* ELIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *COLON();
    SuiteContext *suite();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  SuiteContext : public antlr4::ParserRuleContext {
  public:
    SuiteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_stmtContext *simple_stmt();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *DEDENT();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuiteContext* suite();

  class  FuncdefContext : public antlr4::ParserRuleContext {
  public:
    FuncdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    Funcdef_argsContext *funcdef_args();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *COLON();
    SuiteContext *suite();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncdefContext* funcdef();

  class  Funcdef_argsContext : public antlr4::ParserRuleContext {
  public:
    Funcdef_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Funcdef_argContext *> funcdef_arg();
    Funcdef_argContext* funcdef_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Funcdef_argsContext* funcdef_args();

  class  Funcdef_argContext : public antlr4::ParserRuleContext {
  public:
    Funcdef_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Funcdef_argContext* funcdef_arg();

  class  Simple_stmtContext : public antlr4::ParserRuleContext {
  public:
    Simple_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Small_stmtContext *small_stmt();
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_stmtContext* simple_stmt();

  class  Small_stmtContext : public antlr4::ParserRuleContext {
  public:
    Small_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_stmtContext *expr_stmt();
    Flow_stmtContext *flow_stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Small_stmtContext* small_stmt();

  class  Flow_stmtContext : public antlr4::ParserRuleContext {
  public:
    Flow_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Break_stmtContext *break_stmt();
    Continue_stmtContext *continue_stmt();
    Return_stmtContext *return_stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flow_stmtContext* flow_stmt();

  class  Break_stmtContext : public antlr4::ParserRuleContext {
  public:
    Break_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_stmtContext* break_stmt();

  class  Continue_stmtContext : public antlr4::ParserRuleContext {
  public:
    Continue_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continue_stmtContext* continue_stmt();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    Rvalue_tupleContext *rvalue_tuple();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  Expr_stmtContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Augassign_stmtContext *augassign_stmt();
    Assign_stmtContext *assign_stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_stmtContext* expr_stmt();

  class  Rvalue_tupleContext : public antlr4::ParserRuleContext {
  public:
    Rvalue_tupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rvalue_tupleContext* rvalue_tuple();

  class  Assign_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assign_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rvalue_tupleContext *rvalue_tuple();
    std::vector<Lvalue_tupleContext *> lvalue_tuple();
    Lvalue_tupleContext* lvalue_tuple(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_stmtContext* assign_stmt();

  class  Augassign_stmtContext : public antlr4::ParserRuleContext {
  public:
    Augassign_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    AugassignContext *augassign();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Augassign_stmtContext* augassign_stmt();

  class  AugassignContext : public antlr4::ParserRuleContext {
  public:
    AugassignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *MULT_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *IDIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AugassignContext* augassign();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_testContext *or_test();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  Or_testContext : public antlr4::ParserRuleContext {
  public:
    Or_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_testContext *> and_test();
    And_testContext* and_test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_testContext* or_test();

  class  And_testContext : public antlr4::ParserRuleContext {
  public:
    And_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Not_testContext *> not_test();
    Not_testContext* not_test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_testContext* and_test();

  class  Not_testContext : public antlr4::ParserRuleContext {
  public:
    Not_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    Not_testContext *not_test();
    ComparisonContext *comparison();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not_testContext* not_test();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Arith_exprContext *> arith_expr();
    Arith_exprContext* arith_expr(size_t i);
    std::vector<Comp_opContext *> comp_op();
    Comp_opContext* comp_op(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonContext* comparison();

  class  Comp_opContext : public antlr4::ParserRuleContext {
  public:
    Comp_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *GT_EQ();
    antlr4::tree::TerminalNode *LT_EQ();
    antlr4::tree::TerminalNode *NOT_EQ_2();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comp_opContext* comp_op();

  class  Arith_exprContext : public antlr4::ParserRuleContext {
  public:
    Arith_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<Addorsub_opContext *> addorsub_op();
    Addorsub_opContext* addorsub_op(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arith_exprContext* arith_expr();

  class  Addorsub_opContext : public antlr4::ParserRuleContext {
  public:
    Addorsub_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Addorsub_opContext* addorsub_op();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Muldivmod_opContext *> muldivmod_op();
    Muldivmod_opContext* muldivmod_op(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  Muldivmod_opContext : public antlr4::ParserRuleContext {
  public:
    Muldivmod_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *IDIV();
    antlr4::tree::TerminalNode *MOD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Muldivmod_opContext* muldivmod_op();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *MINUS();
    AtomContext *atom();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  ArglistContext : public antlr4::ParserRuleContext {
  public:
    ArglistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArglistContext* arglist();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ArglistContext *arglist();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    Builtin_functionContext *builtin_function();
    LvalueContext *lvalue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Lvalue_tupleContext : public antlr4::ParserRuleContext {
  public:
    Lvalue_tupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LvalueContext *> lvalue();
    LvalueContext* lvalue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lvalue_tupleContext* lvalue_tuple();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LvalueContext* lvalue();

  class  Builtin_functionContext : public antlr4::ParserRuleContext {
  public:
    Builtin_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Print_functionContext *print_function();
    Int_functionContext *int_function();
    Bool_functionContext *bool_function();
    Str_functionContext *str_function();
    Float_functionContext *float_function();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Builtin_functionContext* builtin_function();

  class  Print_functionContext : public antlr4::ParserRuleContext {
  public:
    Print_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_functionContext* print_function();

  class  Int_functionContext : public antlr4::ParserRuleContext {
  public:
    Int_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_TYPE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Int_functionContext* int_function();

  class  Bool_functionContext : public antlr4::ParserRuleContext {
  public:
    Bool_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL_TYPE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_functionContext* bool_function();

  class  Str_functionContext : public antlr4::ParserRuleContext {
  public:
    Str_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_TYPE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Str_functionContext* str_function();

  class  Float_functionContext : public antlr4::ParserRuleContext {
  public:
    Float_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_TYPE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Float_functionContext* float_function();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

