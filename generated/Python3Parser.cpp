
// Generated from Python3Parser.g4 by ANTLR 4.13.1


#include "Python3ParserVisitor.h"

#include "Python3Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Python3ParserStaticData final {
  Python3ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Python3ParserStaticData(const Python3ParserStaticData&) = delete;
  Python3ParserStaticData(Python3ParserStaticData&&) = delete;
  Python3ParserStaticData& operator=(const Python3ParserStaticData&) = delete;
  Python3ParserStaticData& operator=(Python3ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag python3parserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Python3ParserStaticData *python3parserParserStaticData = nullptr;

void python3parserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (python3parserParserStaticData != nullptr) {
    return;
  }
#else
  assert(python3parserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Python3ParserStaticData>(
    std::vector<std::string>{
      "file_input", "stmt", "compound_stmt", "if_stmt", "while_stmt", "suite", 
      "funcdef", "funcdef_args", "funcdef_arg", "simple_stmt", "small_stmt", 
      "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "expr_stmt", 
      "rvalue_tuple", "assign_stmt", "augassign_stmt", "augassign", "expr", 
      "or_test", "and_test", "not_test", "comparison", "comp_op", "arith_expr", 
      "addorsub_op", "term", "muldivmod_op", "factor", "atom", "arglist", 
      "argument", "function_call", "lvalue_tuple", "lvalue", "builtin_function", 
      "print_function", "int_function", "bool_function", "str_function", 
      "float_function"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "'def'", "'return'", "'if'", "'elif'", "'else'", 
      "'while'", "'for'", "'in'", "'or'", "'and'", "'not'", "'None'", "'True'", 
      "'False'", "'continue'", "'break'", "'print'", "'int'", "'float'", 
      "'str'", "'bool'", "", "", "", "", "", "", "", "", "", "", "'.'", 
      "'...'", "'*'", "'('", "')'", "','", "':'", "';'", "'**'", "'='", 
      "'['", "']'", "'|'", "'^'", "'&'", "'<<'", "'>>'", "'+'", "'-'", "'/'", 
      "'%'", "'//'", "'~'", "'{'", "'}'", "'<'", "'>'", "'=='", "'>='", 
      "'<='", "'<>'", "'!='", "'@'", "'->'", "'+='", "'-='", "'*='", "'@='", 
      "'/='", "'%='", "'&='", "'|='", "'^='", "'<<='", "'>>='", "'**='", 
      "'//='"
    },
    std::vector<std::string>{
      "", "INDENT", "DEDENT", "STRING", "NUMBER", "INTEGER", "DEF", "RETURN", 
      "IF", "ELIF", "ELSE", "WHILE", "FOR", "IN", "OR", "AND", "NOT", "NONE", 
      "TRUE", "FALSE", "CONTINUE", "BREAK", "PRINT", "INT_TYPE", "FLOAT_TYPE", 
      "STRING_TYPE", "BOOL_TYPE", "NEWLINE", "NAME", "STRING_LITERAL", "BYTES_LITERAL", 
      "DECIMAL_INTEGER", "OCT_INTEGER", "HEX_INTEGER", "BIN_INTEGER", "FLOAT_NUMBER", 
      "IMAG_NUMBER", "DOT", "ELLIPSIS", "STAR", "OPEN_PAREN", "CLOSE_PAREN", 
      "COMMA", "COLON", "SEMI_COLON", "POWER", "ASSIGN", "OPEN_BRACK", "CLOSE_BRACK", 
      "OR_OP", "XOR", "AND_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "ADD", "MINUS", 
      "DIV", "MOD", "IDIV", "NOT_OP", "OPEN_BRACE", "CLOSE_BRACE", "LESS_THAN", 
      "GREATER_THAN", "EQUALS", "GT_EQ", "LT_EQ", "NOT_EQ_1", "NOT_EQ_2", 
      "AT", "ARROW", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", "AT_ASSIGN", 
      "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
      "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "POWER_ASSIGN", "IDIV_ASSIGN", 
      "SKIP_", "UNKNOWN_CHAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,85,365,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,1,0,1,0,5,0,89,8,0,10,0,12,0,92,9,0,1,0,1,0,1,1,1,1,3,1,98,8,1,1,2,
  	1,2,1,2,3,2,103,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,114,8,3,10,
  	3,12,3,117,9,3,1,3,1,3,1,3,3,3,122,8,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,
  	5,1,5,4,5,133,8,5,11,5,12,5,134,1,5,1,5,3,5,139,8,5,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,7,1,7,1,7,5,7,152,8,7,10,7,12,7,155,9,7,1,7,3,7,158,8,
  	7,3,7,160,8,7,1,8,1,8,1,8,1,8,3,8,166,8,8,1,9,1,9,1,9,1,10,1,10,3,10,
  	173,8,10,1,11,1,11,1,11,3,11,178,8,11,1,12,1,12,1,13,1,13,1,14,1,14,3,
  	14,186,8,14,1,15,1,15,3,15,190,8,15,1,16,1,16,1,16,5,16,195,8,16,10,16,
  	12,16,198,9,16,1,16,3,16,201,8,16,1,17,1,17,1,17,5,17,206,8,17,10,17,
  	12,17,209,9,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,
  	1,21,1,21,5,21,224,8,21,10,21,12,21,227,9,21,1,22,1,22,1,22,5,22,232,
  	8,22,10,22,12,22,235,9,22,1,23,1,23,1,23,3,23,240,8,23,1,24,1,24,1,24,
  	1,24,5,24,246,8,24,10,24,12,24,249,9,24,1,25,1,25,1,26,1,26,1,26,1,26,
  	5,26,257,8,26,10,26,12,26,260,9,26,1,27,1,27,1,28,1,28,1,28,1,28,5,28,
  	268,8,28,10,28,12,28,271,9,28,1,29,1,29,1,30,1,30,1,30,3,30,278,8,30,
  	1,31,1,31,1,31,4,31,283,8,31,11,31,12,31,284,1,31,1,31,1,31,1,31,1,31,
  	1,31,1,31,1,31,3,31,295,8,31,1,32,1,32,1,32,5,32,300,8,32,10,32,12,32,
  	303,9,32,1,32,3,32,306,8,32,3,32,308,8,32,1,33,1,33,1,33,1,33,3,33,314,
  	8,33,1,34,1,34,3,34,318,8,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,
  	1,35,1,35,1,35,5,35,331,8,35,10,35,12,35,334,9,35,1,35,3,35,337,8,35,
  	3,35,339,8,35,1,36,1,36,1,36,1,36,1,36,3,36,346,8,36,1,37,1,37,1,37,1,
  	37,1,37,3,37,353,8,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,
  	42,1,42,0,0,43,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,
  	0,4,3,0,71,73,75,76,83,83,2,0,62,66,68,68,1,0,54,55,2,0,39,39,56,58,370,
  	0,90,1,0,0,0,2,97,1,0,0,0,4,102,1,0,0,0,6,104,1,0,0,0,8,123,1,0,0,0,10,
  	138,1,0,0,0,12,140,1,0,0,0,14,159,1,0,0,0,16,165,1,0,0,0,18,167,1,0,0,
  	0,20,172,1,0,0,0,22,177,1,0,0,0,24,179,1,0,0,0,26,181,1,0,0,0,28,183,
  	1,0,0,0,30,189,1,0,0,0,32,191,1,0,0,0,34,207,1,0,0,0,36,212,1,0,0,0,38,
  	216,1,0,0,0,40,218,1,0,0,0,42,220,1,0,0,0,44,228,1,0,0,0,46,239,1,0,0,
  	0,48,241,1,0,0,0,50,250,1,0,0,0,52,252,1,0,0,0,54,261,1,0,0,0,56,263,
  	1,0,0,0,58,272,1,0,0,0,60,277,1,0,0,0,62,294,1,0,0,0,64,307,1,0,0,0,66,
  	313,1,0,0,0,68,317,1,0,0,0,70,338,1,0,0,0,72,345,1,0,0,0,74,352,1,0,0,
  	0,76,354,1,0,0,0,78,356,1,0,0,0,80,358,1,0,0,0,82,360,1,0,0,0,84,362,
  	1,0,0,0,86,89,5,27,0,0,87,89,3,2,1,0,88,86,1,0,0,0,88,87,1,0,0,0,89,92,
  	1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,90,1,0,0,0,93,94,
  	5,0,0,1,94,1,1,0,0,0,95,98,3,18,9,0,96,98,3,4,2,0,97,95,1,0,0,0,97,96,
  	1,0,0,0,98,3,1,0,0,0,99,103,3,6,3,0,100,103,3,8,4,0,101,103,3,12,6,0,
  	102,99,1,0,0,0,102,100,1,0,0,0,102,101,1,0,0,0,103,5,1,0,0,0,104,105,
  	5,8,0,0,105,106,3,40,20,0,106,107,5,43,0,0,107,115,3,10,5,0,108,109,5,
  	9,0,0,109,110,3,40,20,0,110,111,5,43,0,0,111,112,3,10,5,0,112,114,1,0,
  	0,0,113,108,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,1,0,0,0,116,
  	121,1,0,0,0,117,115,1,0,0,0,118,119,5,10,0,0,119,120,5,43,0,0,120,122,
  	3,10,5,0,121,118,1,0,0,0,121,122,1,0,0,0,122,7,1,0,0,0,123,124,5,11,0,
  	0,124,125,3,40,20,0,125,126,5,43,0,0,126,127,3,10,5,0,127,9,1,0,0,0,128,
  	139,3,18,9,0,129,130,5,27,0,0,130,132,5,1,0,0,131,133,3,2,1,0,132,131,
  	1,0,0,0,133,134,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,136,1,0,0,
  	0,136,137,5,2,0,0,137,139,1,0,0,0,138,128,1,0,0,0,138,129,1,0,0,0,139,
  	11,1,0,0,0,140,141,5,6,0,0,141,142,5,28,0,0,142,143,5,40,0,0,143,144,
  	3,14,7,0,144,145,5,41,0,0,145,146,5,43,0,0,146,147,3,10,5,0,147,13,1,
  	0,0,0,148,153,3,16,8,0,149,150,5,42,0,0,150,152,3,16,8,0,151,149,1,0,
  	0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,157,1,0,0,0,155,
  	153,1,0,0,0,156,158,5,42,0,0,157,156,1,0,0,0,157,158,1,0,0,0,158,160,
  	1,0,0,0,159,148,1,0,0,0,159,160,1,0,0,0,160,15,1,0,0,0,161,166,5,28,0,
  	0,162,163,5,28,0,0,163,164,5,46,0,0,164,166,3,40,20,0,165,161,1,0,0,0,
  	165,162,1,0,0,0,166,17,1,0,0,0,167,168,3,20,10,0,168,169,5,27,0,0,169,
  	19,1,0,0,0,170,173,3,30,15,0,171,173,3,22,11,0,172,170,1,0,0,0,172,171,
  	1,0,0,0,173,21,1,0,0,0,174,178,3,24,12,0,175,178,3,26,13,0,176,178,3,
  	28,14,0,177,174,1,0,0,0,177,175,1,0,0,0,177,176,1,0,0,0,178,23,1,0,0,
  	0,179,180,5,21,0,0,180,25,1,0,0,0,181,182,5,20,0,0,182,27,1,0,0,0,183,
  	185,5,7,0,0,184,186,3,32,16,0,185,184,1,0,0,0,185,186,1,0,0,0,186,29,
  	1,0,0,0,187,190,3,36,18,0,188,190,3,34,17,0,189,187,1,0,0,0,189,188,1,
  	0,0,0,190,31,1,0,0,0,191,196,3,40,20,0,192,193,5,42,0,0,193,195,3,40,
  	20,0,194,192,1,0,0,0,195,198,1,0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,
  	197,200,1,0,0,0,198,196,1,0,0,0,199,201,5,42,0,0,200,199,1,0,0,0,200,
  	201,1,0,0,0,201,33,1,0,0,0,202,203,3,70,35,0,203,204,5,46,0,0,204,206,
  	1,0,0,0,205,202,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,
  	0,208,210,1,0,0,0,209,207,1,0,0,0,210,211,3,32,16,0,211,35,1,0,0,0,212,
  	213,3,72,36,0,213,214,3,38,19,0,214,215,3,40,20,0,215,37,1,0,0,0,216,
  	217,7,0,0,0,217,39,1,0,0,0,218,219,3,42,21,0,219,41,1,0,0,0,220,225,3,
  	44,22,0,221,222,5,14,0,0,222,224,3,44,22,0,223,221,1,0,0,0,224,227,1,
  	0,0,0,225,223,1,0,0,0,225,226,1,0,0,0,226,43,1,0,0,0,227,225,1,0,0,0,
  	228,233,3,46,23,0,229,230,5,15,0,0,230,232,3,46,23,0,231,229,1,0,0,0,
  	232,235,1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,45,1,0,0,0,235,233,
  	1,0,0,0,236,237,5,16,0,0,237,240,3,46,23,0,238,240,3,48,24,0,239,236,
  	1,0,0,0,239,238,1,0,0,0,240,47,1,0,0,0,241,247,3,52,26,0,242,243,3,50,
  	25,0,243,244,3,52,26,0,244,246,1,0,0,0,245,242,1,0,0,0,246,249,1,0,0,
  	0,247,245,1,0,0,0,247,248,1,0,0,0,248,49,1,0,0,0,249,247,1,0,0,0,250,
  	251,7,1,0,0,251,51,1,0,0,0,252,258,3,56,28,0,253,254,3,54,27,0,254,255,
  	3,56,28,0,255,257,1,0,0,0,256,253,1,0,0,0,257,260,1,0,0,0,258,256,1,0,
  	0,0,258,259,1,0,0,0,259,53,1,0,0,0,260,258,1,0,0,0,261,262,7,2,0,0,262,
  	55,1,0,0,0,263,269,3,60,30,0,264,265,3,58,29,0,265,266,3,60,30,0,266,
  	268,1,0,0,0,267,264,1,0,0,0,268,271,1,0,0,0,269,267,1,0,0,0,269,270,1,
  	0,0,0,270,57,1,0,0,0,271,269,1,0,0,0,272,273,7,3,0,0,273,59,1,0,0,0,274,
  	275,7,2,0,0,275,278,3,60,30,0,276,278,3,62,31,0,277,274,1,0,0,0,277,276,
  	1,0,0,0,278,61,1,0,0,0,279,295,5,28,0,0,280,295,5,4,0,0,281,283,5,3,0,
  	0,282,281,1,0,0,0,283,284,1,0,0,0,284,282,1,0,0,0,284,285,1,0,0,0,285,
  	295,1,0,0,0,286,295,5,17,0,0,287,295,5,18,0,0,288,295,5,19,0,0,289,290,
  	5,40,0,0,290,291,3,40,20,0,291,292,5,41,0,0,292,295,1,0,0,0,293,295,3,
  	68,34,0,294,279,1,0,0,0,294,280,1,0,0,0,294,282,1,0,0,0,294,286,1,0,0,
  	0,294,287,1,0,0,0,294,288,1,0,0,0,294,289,1,0,0,0,294,293,1,0,0,0,295,
  	63,1,0,0,0,296,301,3,66,33,0,297,298,5,42,0,0,298,300,3,66,33,0,299,297,
  	1,0,0,0,300,303,1,0,0,0,301,299,1,0,0,0,301,302,1,0,0,0,302,305,1,0,0,
  	0,303,301,1,0,0,0,304,306,5,42,0,0,305,304,1,0,0,0,305,306,1,0,0,0,306,
  	308,1,0,0,0,307,296,1,0,0,0,307,308,1,0,0,0,308,65,1,0,0,0,309,314,3,
  	40,20,0,310,311,5,28,0,0,311,312,5,46,0,0,312,314,3,40,20,0,313,309,1,
  	0,0,0,313,310,1,0,0,0,314,67,1,0,0,0,315,318,3,74,37,0,316,318,3,72,36,
  	0,317,315,1,0,0,0,317,316,1,0,0,0,318,319,1,0,0,0,319,320,5,40,0,0,320,
  	321,3,64,32,0,321,322,5,41,0,0,322,69,1,0,0,0,323,324,5,40,0,0,324,325,
  	3,70,35,0,325,326,5,41,0,0,326,339,1,0,0,0,327,332,3,72,36,0,328,329,
  	5,42,0,0,329,331,3,72,36,0,330,328,1,0,0,0,331,334,1,0,0,0,332,330,1,
  	0,0,0,332,333,1,0,0,0,333,336,1,0,0,0,334,332,1,0,0,0,335,337,5,42,0,
  	0,336,335,1,0,0,0,336,337,1,0,0,0,337,339,1,0,0,0,338,323,1,0,0,0,338,
  	327,1,0,0,0,339,71,1,0,0,0,340,341,5,40,0,0,341,342,3,72,36,0,342,343,
  	5,41,0,0,343,346,1,0,0,0,344,346,5,28,0,0,345,340,1,0,0,0,345,344,1,0,
  	0,0,346,73,1,0,0,0,347,353,3,76,38,0,348,353,3,78,39,0,349,353,3,80,40,
  	0,350,353,3,82,41,0,351,353,3,84,42,0,352,347,1,0,0,0,352,348,1,0,0,0,
  	352,349,1,0,0,0,352,350,1,0,0,0,352,351,1,0,0,0,353,75,1,0,0,0,354,355,
  	5,22,0,0,355,77,1,0,0,0,356,357,5,23,0,0,357,79,1,0,0,0,358,359,5,26,
  	0,0,359,81,1,0,0,0,360,361,5,25,0,0,361,83,1,0,0,0,362,363,5,24,0,0,363,
  	85,1,0,0,0,38,88,90,97,102,115,121,134,138,153,157,159,165,172,177,185,
  	189,196,200,207,225,233,239,247,258,269,277,284,294,301,305,307,313,317,
  	332,336,338,345,352
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  python3parserParserStaticData = staticData.release();
}

}

Python3Parser::Python3Parser(TokenStream *input) : Python3Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

Python3Parser::Python3Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  Python3Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *python3parserParserStaticData->atn, python3parserParserStaticData->decisionToDFA, python3parserParserStaticData->sharedContextCache, options);
}

Python3Parser::~Python3Parser() {
  delete _interpreter;
}

const atn::ATN& Python3Parser::getATN() const {
  return *python3parserParserStaticData->atn;
}

std::string Python3Parser::getGrammarFileName() const {
  return "Python3Parser.g4";
}

const std::vector<std::string>& Python3Parser::getRuleNames() const {
  return python3parserParserStaticData->ruleNames;
}

const dfa::Vocabulary& Python3Parser::getVocabulary() const {
  return python3parserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Python3Parser::getSerializedATN() const {
  return python3parserParserStaticData->serializedATN;
}


//----------------- File_inputContext ------------------------------------------------------------------

Python3Parser::File_inputContext::File_inputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::File_inputContext::EOF() {
  return getToken(Python3Parser::EOF, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::File_inputContext::NEWLINE() {
  return getTokens(Python3Parser::NEWLINE);
}

tree::TerminalNode* Python3Parser::File_inputContext::NEWLINE(size_t i) {
  return getToken(Python3Parser::NEWLINE, i);
}

std::vector<Python3Parser::StmtContext *> Python3Parser::File_inputContext::stmt() {
  return getRuleContexts<Python3Parser::StmtContext>();
}

Python3Parser::StmtContext* Python3Parser::File_inputContext::stmt(size_t i) {
  return getRuleContext<Python3Parser::StmtContext>(i);
}


size_t Python3Parser::File_inputContext::getRuleIndex() const {
  return Python3Parser::RuleFile_input;
}


std::any Python3Parser::File_inputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFile_input(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::File_inputContext* Python3Parser::file_input() {
  File_inputContext *_localctx = _tracker.createInstance<File_inputContext>(_ctx, getState());
  enterRule(_localctx, 0, Python3Parser::RuleFile_input);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54044295576881624) != 0)) {
      setState(88);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::NEWLINE: {
          setState(86);
          match(Python3Parser::NEWLINE);
          break;
        }

        case Python3Parser::STRING:
        case Python3Parser::NUMBER:
        case Python3Parser::DEF:
        case Python3Parser::RETURN:
        case Python3Parser::IF:
        case Python3Parser::WHILE:
        case Python3Parser::NOT:
        case Python3Parser::NONE:
        case Python3Parser::TRUE:
        case Python3Parser::FALSE:
        case Python3Parser::CONTINUE:
        case Python3Parser::BREAK:
        case Python3Parser::PRINT:
        case Python3Parser::INT_TYPE:
        case Python3Parser::FLOAT_TYPE:
        case Python3Parser::STRING_TYPE:
        case Python3Parser::BOOL_TYPE:
        case Python3Parser::NAME:
        case Python3Parser::OPEN_PAREN:
        case Python3Parser::ADD:
        case Python3Parser::MINUS: {
          setState(87);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    match(Python3Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

Python3Parser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Simple_stmtContext* Python3Parser::StmtContext::simple_stmt() {
  return getRuleContext<Python3Parser::Simple_stmtContext>(0);
}

Python3Parser::Compound_stmtContext* Python3Parser::StmtContext::compound_stmt() {
  return getRuleContext<Python3Parser::Compound_stmtContext>(0);
}


size_t Python3Parser::StmtContext::getRuleIndex() const {
  return Python3Parser::RuleStmt;
}


std::any Python3Parser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::StmtContext* Python3Parser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, Python3Parser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::RETURN:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK:
      case Python3Parser::PRINT:
      case Python3Parser::INT_TYPE:
      case Python3Parser::FLOAT_TYPE:
      case Python3Parser::STRING_TYPE:
      case Python3Parser::BOOL_TYPE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(95);
        simple_stmt();
        break;
      }

      case Python3Parser::DEF:
      case Python3Parser::IF:
      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(96);
        compound_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

Python3Parser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::If_stmtContext* Python3Parser::Compound_stmtContext::if_stmt() {
  return getRuleContext<Python3Parser::If_stmtContext>(0);
}

Python3Parser::While_stmtContext* Python3Parser::Compound_stmtContext::while_stmt() {
  return getRuleContext<Python3Parser::While_stmtContext>(0);
}

Python3Parser::FuncdefContext* Python3Parser::Compound_stmtContext::funcdef() {
  return getRuleContext<Python3Parser::FuncdefContext>(0);
}


size_t Python3Parser::Compound_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleCompound_stmt;
}


std::any Python3Parser::Compound_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitCompound_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Compound_stmtContext* Python3Parser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, Python3Parser::RuleCompound_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(99);
        if_stmt();
        break;
      }

      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(100);
        while_stmt();
        break;
      }

      case Python3Parser::DEF: {
        enterOuterAlt(_localctx, 3);
        setState(101);
        funcdef();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

Python3Parser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::If_stmtContext::IF() {
  return getToken(Python3Parser::IF, 0);
}

std::vector<Python3Parser::ExprContext *> Python3Parser::If_stmtContext::expr() {
  return getRuleContexts<Python3Parser::ExprContext>();
}

Python3Parser::ExprContext* Python3Parser::If_stmtContext::expr(size_t i) {
  return getRuleContext<Python3Parser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::If_stmtContext::COLON() {
  return getTokens(Python3Parser::COLON);
}

tree::TerminalNode* Python3Parser::If_stmtContext::COLON(size_t i) {
  return getToken(Python3Parser::COLON, i);
}

std::vector<Python3Parser::SuiteContext *> Python3Parser::If_stmtContext::suite() {
  return getRuleContexts<Python3Parser::SuiteContext>();
}

Python3Parser::SuiteContext* Python3Parser::If_stmtContext::suite(size_t i) {
  return getRuleContext<Python3Parser::SuiteContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::If_stmtContext::ELIF() {
  return getTokens(Python3Parser::ELIF);
}

tree::TerminalNode* Python3Parser::If_stmtContext::ELIF(size_t i) {
  return getToken(Python3Parser::ELIF, i);
}

tree::TerminalNode* Python3Parser::If_stmtContext::ELSE() {
  return getToken(Python3Parser::ELSE, 0);
}


size_t Python3Parser::If_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleIf_stmt;
}


std::any Python3Parser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::If_stmtContext* Python3Parser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 6, Python3Parser::RuleIf_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(Python3Parser::IF);
    setState(105);
    expr();
    setState(106);
    match(Python3Parser::COLON);
    setState(107);
    suite();
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ELIF) {
      setState(108);
      match(Python3Parser::ELIF);
      setState(109);
      expr();
      setState(110);
      match(Python3Parser::COLON);
      setState(111);
      suite();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(118);
      match(Python3Parser::ELSE);
      setState(119);
      match(Python3Parser::COLON);
      setState(120);
      suite();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

Python3Parser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::While_stmtContext::WHILE() {
  return getToken(Python3Parser::WHILE, 0);
}

Python3Parser::ExprContext* Python3Parser::While_stmtContext::expr() {
  return getRuleContext<Python3Parser::ExprContext>(0);
}

tree::TerminalNode* Python3Parser::While_stmtContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::SuiteContext* Python3Parser::While_stmtContext::suite() {
  return getRuleContext<Python3Parser::SuiteContext>(0);
}


size_t Python3Parser::While_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleWhile_stmt;
}


std::any Python3Parser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::While_stmtContext* Python3Parser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 8, Python3Parser::RuleWhile_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(Python3Parser::WHILE);
    setState(124);
    expr();
    setState(125);
    match(Python3Parser::COLON);
    setState(126);
    suite();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuiteContext ------------------------------------------------------------------

Python3Parser::SuiteContext::SuiteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Simple_stmtContext* Python3Parser::SuiteContext::simple_stmt() {
  return getRuleContext<Python3Parser::Simple_stmtContext>(0);
}

tree::TerminalNode* Python3Parser::SuiteContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}

tree::TerminalNode* Python3Parser::SuiteContext::INDENT() {
  return getToken(Python3Parser::INDENT, 0);
}

tree::TerminalNode* Python3Parser::SuiteContext::DEDENT() {
  return getToken(Python3Parser::DEDENT, 0);
}

std::vector<Python3Parser::StmtContext *> Python3Parser::SuiteContext::stmt() {
  return getRuleContexts<Python3Parser::StmtContext>();
}

Python3Parser::StmtContext* Python3Parser::SuiteContext::stmt(size_t i) {
  return getRuleContext<Python3Parser::StmtContext>(i);
}


size_t Python3Parser::SuiteContext::getRuleIndex() const {
  return Python3Parser::RuleSuite;
}


std::any Python3Parser::SuiteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitSuite(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::SuiteContext* Python3Parser::suite() {
  SuiteContext *_localctx = _tracker.createInstance<SuiteContext>(_ctx, getState());
  enterRule(_localctx, 10, Python3Parser::RuleSuite);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::RETURN:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK:
      case Python3Parser::PRINT:
      case Python3Parser::INT_TYPE:
      case Python3Parser::FLOAT_TYPE:
      case Python3Parser::STRING_TYPE:
      case Python3Parser::BOOL_TYPE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(128);
        simple_stmt();
        break;
      }

      case Python3Parser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(129);
        match(Python3Parser::NEWLINE);
        setState(130);
        match(Python3Parser::INDENT);
        setState(132); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(131);
          stmt();
          setState(134); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 54044295442663896) != 0));
        setState(136);
        match(Python3Parser::DEDENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

Python3Parser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::FuncdefContext::DEF() {
  return getToken(Python3Parser::DEF, 0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

Python3Parser::Funcdef_argsContext* Python3Parser::FuncdefContext::funcdef_args() {
  return getRuleContext<Python3Parser::Funcdef_argsContext>(0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

tree::TerminalNode* Python3Parser::FuncdefContext::COLON() {
  return getToken(Python3Parser::COLON, 0);
}

Python3Parser::SuiteContext* Python3Parser::FuncdefContext::suite() {
  return getRuleContext<Python3Parser::SuiteContext>(0);
}


size_t Python3Parser::FuncdefContext::getRuleIndex() const {
  return Python3Parser::RuleFuncdef;
}


std::any Python3Parser::FuncdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFuncdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FuncdefContext* Python3Parser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 12, Python3Parser::RuleFuncdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(Python3Parser::DEF);
    setState(141);
    match(Python3Parser::NAME);
    setState(142);
    match(Python3Parser::OPEN_PAREN);
    setState(143);
    funcdef_args();
    setState(144);
    match(Python3Parser::CLOSE_PAREN);
    setState(145);
    match(Python3Parser::COLON);
    setState(146);
    suite();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Funcdef_argsContext ------------------------------------------------------------------

Python3Parser::Funcdef_argsContext::Funcdef_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Funcdef_argContext *> Python3Parser::Funcdef_argsContext::funcdef_arg() {
  return getRuleContexts<Python3Parser::Funcdef_argContext>();
}

Python3Parser::Funcdef_argContext* Python3Parser::Funcdef_argsContext::funcdef_arg(size_t i) {
  return getRuleContext<Python3Parser::Funcdef_argContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Funcdef_argsContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Funcdef_argsContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Funcdef_argsContext::getRuleIndex() const {
  return Python3Parser::RuleFuncdef_args;
}


std::any Python3Parser::Funcdef_argsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFuncdef_args(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Funcdef_argsContext* Python3Parser::funcdef_args() {
  Funcdef_argsContext *_localctx = _tracker.createInstance<Funcdef_argsContext>(_ctx, getState());
  enterRule(_localctx, 14, Python3Parser::RuleFuncdef_args);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::NAME) {
      setState(148);
      funcdef_arg();
      setState(153);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(149);
          match(Python3Parser::COMMA);
          setState(150);
          funcdef_arg(); 
        }
        setState(155);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      }
      setState(157);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::COMMA) {
        setState(156);
        match(Python3Parser::COMMA);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Funcdef_argContext ------------------------------------------------------------------

Python3Parser::Funcdef_argContext::Funcdef_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Funcdef_argContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}

tree::TerminalNode* Python3Parser::Funcdef_argContext::ASSIGN() {
  return getToken(Python3Parser::ASSIGN, 0);
}

Python3Parser::ExprContext* Python3Parser::Funcdef_argContext::expr() {
  return getRuleContext<Python3Parser::ExprContext>(0);
}


size_t Python3Parser::Funcdef_argContext::getRuleIndex() const {
  return Python3Parser::RuleFuncdef_arg;
}


std::any Python3Parser::Funcdef_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFuncdef_arg(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Funcdef_argContext* Python3Parser::funcdef_arg() {
  Funcdef_argContext *_localctx = _tracker.createInstance<Funcdef_argContext>(_ctx, getState());
  enterRule(_localctx, 16, Python3Parser::RuleFuncdef_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(161);
      match(Python3Parser::NAME);
      break;
    }

    case 2: {
      setState(162);
      match(Python3Parser::NAME);
      setState(163);
      match(Python3Parser::ASSIGN);
      setState(164);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_stmtContext ------------------------------------------------------------------

Python3Parser::Simple_stmtContext::Simple_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Small_stmtContext* Python3Parser::Simple_stmtContext::small_stmt() {
  return getRuleContext<Python3Parser::Small_stmtContext>(0);
}

tree::TerminalNode* Python3Parser::Simple_stmtContext::NEWLINE() {
  return getToken(Python3Parser::NEWLINE, 0);
}


size_t Python3Parser::Simple_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleSimple_stmt;
}


std::any Python3Parser::Simple_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitSimple_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Simple_stmtContext* Python3Parser::simple_stmt() {
  Simple_stmtContext *_localctx = _tracker.createInstance<Simple_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, Python3Parser::RuleSimple_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    small_stmt();
    setState(168);
    match(Python3Parser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Small_stmtContext ------------------------------------------------------------------

Python3Parser::Small_stmtContext::Small_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Expr_stmtContext* Python3Parser::Small_stmtContext::expr_stmt() {
  return getRuleContext<Python3Parser::Expr_stmtContext>(0);
}

Python3Parser::Flow_stmtContext* Python3Parser::Small_stmtContext::flow_stmt() {
  return getRuleContext<Python3Parser::Flow_stmtContext>(0);
}


size_t Python3Parser::Small_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleSmall_stmt;
}


std::any Python3Parser::Small_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitSmall_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Small_stmtContext* Python3Parser::small_stmt() {
  Small_stmtContext *_localctx = _tracker.createInstance<Small_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, Python3Parser::RuleSmall_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NOT:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::PRINT:
      case Python3Parser::INT_TYPE:
      case Python3Parser::FLOAT_TYPE:
      case Python3Parser::STRING_TYPE:
      case Python3Parser::BOOL_TYPE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(170);
        expr_stmt();
        break;
      }

      case Python3Parser::RETURN:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 2);
        setState(171);
        flow_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Flow_stmtContext ------------------------------------------------------------------

Python3Parser::Flow_stmtContext::Flow_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Break_stmtContext* Python3Parser::Flow_stmtContext::break_stmt() {
  return getRuleContext<Python3Parser::Break_stmtContext>(0);
}

Python3Parser::Continue_stmtContext* Python3Parser::Flow_stmtContext::continue_stmt() {
  return getRuleContext<Python3Parser::Continue_stmtContext>(0);
}

Python3Parser::Return_stmtContext* Python3Parser::Flow_stmtContext::return_stmt() {
  return getRuleContext<Python3Parser::Return_stmtContext>(0);
}


size_t Python3Parser::Flow_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleFlow_stmt;
}


std::any Python3Parser::Flow_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFlow_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Flow_stmtContext* Python3Parser::flow_stmt() {
  Flow_stmtContext *_localctx = _tracker.createInstance<Flow_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, Python3Parser::RuleFlow_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(177);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(174);
        break_stmt();
        break;
      }

      case Python3Parser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(175);
        continue_stmt();
        break;
      }

      case Python3Parser::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(176);
        return_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Break_stmtContext ------------------------------------------------------------------

Python3Parser::Break_stmtContext::Break_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Break_stmtContext::BREAK() {
  return getToken(Python3Parser::BREAK, 0);
}


size_t Python3Parser::Break_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleBreak_stmt;
}


std::any Python3Parser::Break_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitBreak_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Break_stmtContext* Python3Parser::break_stmt() {
  Break_stmtContext *_localctx = _tracker.createInstance<Break_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, Python3Parser::RuleBreak_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(Python3Parser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Continue_stmtContext ------------------------------------------------------------------

Python3Parser::Continue_stmtContext::Continue_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Continue_stmtContext::CONTINUE() {
  return getToken(Python3Parser::CONTINUE, 0);
}


size_t Python3Parser::Continue_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleContinue_stmt;
}


std::any Python3Parser::Continue_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitContinue_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Continue_stmtContext* Python3Parser::continue_stmt() {
  Continue_stmtContext *_localctx = _tracker.createInstance<Continue_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, Python3Parser::RuleContinue_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(Python3Parser::CONTINUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

Python3Parser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Return_stmtContext::RETURN() {
  return getToken(Python3Parser::RETURN, 0);
}

Python3Parser::Rvalue_tupleContext* Python3Parser::Return_stmtContext::rvalue_tuple() {
  return getRuleContext<Python3Parser::Rvalue_tupleContext>(0);
}


size_t Python3Parser::Return_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleReturn_stmt;
}


std::any Python3Parser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Return_stmtContext* Python3Parser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, Python3Parser::RuleReturn_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(Python3Parser::RETURN);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54044295439515672) != 0)) {
      setState(184);
      rvalue_tuple();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_stmtContext ------------------------------------------------------------------

Python3Parser::Expr_stmtContext::Expr_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Augassign_stmtContext* Python3Parser::Expr_stmtContext::augassign_stmt() {
  return getRuleContext<Python3Parser::Augassign_stmtContext>(0);
}

Python3Parser::Assign_stmtContext* Python3Parser::Expr_stmtContext::assign_stmt() {
  return getRuleContext<Python3Parser::Assign_stmtContext>(0);
}


size_t Python3Parser::Expr_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleExpr_stmt;
}


std::any Python3Parser::Expr_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitExpr_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Expr_stmtContext* Python3Parser::expr_stmt() {
  Expr_stmtContext *_localctx = _tracker.createInstance<Expr_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, Python3Parser::RuleExpr_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(187);
      augassign_stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(188);
      assign_stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rvalue_tupleContext ------------------------------------------------------------------

Python3Parser::Rvalue_tupleContext::Rvalue_tupleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::ExprContext *> Python3Parser::Rvalue_tupleContext::expr() {
  return getRuleContexts<Python3Parser::ExprContext>();
}

Python3Parser::ExprContext* Python3Parser::Rvalue_tupleContext::expr(size_t i) {
  return getRuleContext<Python3Parser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Rvalue_tupleContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Rvalue_tupleContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Rvalue_tupleContext::getRuleIndex() const {
  return Python3Parser::RuleRvalue_tuple;
}


std::any Python3Parser::Rvalue_tupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitRvalue_tuple(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Rvalue_tupleContext* Python3Parser::rvalue_tuple() {
  Rvalue_tupleContext *_localctx = _tracker.createInstance<Rvalue_tupleContext>(_ctx, getState());
  enterRule(_localctx, 32, Python3Parser::RuleRvalue_tuple);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(191);
    expr();
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(192);
        match(Python3Parser::COMMA);
        setState(193);
        expr(); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(199);
      match(Python3Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_stmtContext ------------------------------------------------------------------

Python3Parser::Assign_stmtContext::Assign_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Rvalue_tupleContext* Python3Parser::Assign_stmtContext::rvalue_tuple() {
  return getRuleContext<Python3Parser::Rvalue_tupleContext>(0);
}

std::vector<Python3Parser::Lvalue_tupleContext *> Python3Parser::Assign_stmtContext::lvalue_tuple() {
  return getRuleContexts<Python3Parser::Lvalue_tupleContext>();
}

Python3Parser::Lvalue_tupleContext* Python3Parser::Assign_stmtContext::lvalue_tuple(size_t i) {
  return getRuleContext<Python3Parser::Lvalue_tupleContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Assign_stmtContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::Assign_stmtContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}


size_t Python3Parser::Assign_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleAssign_stmt;
}


std::any Python3Parser::Assign_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitAssign_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Assign_stmtContext* Python3Parser::assign_stmt() {
  Assign_stmtContext *_localctx = _tracker.createInstance<Assign_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, Python3Parser::RuleAssign_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(207);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(202);
        lvalue_tuple();
        setState(203);
        match(Python3Parser::ASSIGN); 
      }
      setState(209);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(210);
    rvalue_tuple();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Augassign_stmtContext ------------------------------------------------------------------

Python3Parser::Augassign_stmtContext::Augassign_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::LvalueContext* Python3Parser::Augassign_stmtContext::lvalue() {
  return getRuleContext<Python3Parser::LvalueContext>(0);
}

Python3Parser::AugassignContext* Python3Parser::Augassign_stmtContext::augassign() {
  return getRuleContext<Python3Parser::AugassignContext>(0);
}

Python3Parser::ExprContext* Python3Parser::Augassign_stmtContext::expr() {
  return getRuleContext<Python3Parser::ExprContext>(0);
}


size_t Python3Parser::Augassign_stmtContext::getRuleIndex() const {
  return Python3Parser::RuleAugassign_stmt;
}


std::any Python3Parser::Augassign_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitAugassign_stmt(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Augassign_stmtContext* Python3Parser::augassign_stmt() {
  Augassign_stmtContext *_localctx = _tracker.createInstance<Augassign_stmtContext>(_ctx, getState());
  enterRule(_localctx, 36, Python3Parser::RuleAugassign_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    lvalue();
    setState(213);
    augassign();
    setState(214);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AugassignContext ------------------------------------------------------------------

Python3Parser::AugassignContext::AugassignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::AugassignContext::ADD_ASSIGN() {
  return getToken(Python3Parser::ADD_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::SUB_ASSIGN() {
  return getToken(Python3Parser::SUB_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::MULT_ASSIGN() {
  return getToken(Python3Parser::MULT_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::DIV_ASSIGN() {
  return getToken(Python3Parser::DIV_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::IDIV_ASSIGN() {
  return getToken(Python3Parser::IDIV_ASSIGN, 0);
}

tree::TerminalNode* Python3Parser::AugassignContext::MOD_ASSIGN() {
  return getToken(Python3Parser::MOD_ASSIGN, 0);
}


size_t Python3Parser::AugassignContext::getRuleIndex() const {
  return Python3Parser::RuleAugassign;
}


std::any Python3Parser::AugassignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitAugassign(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::AugassignContext* Python3Parser::augassign() {
  AugassignContext *_localctx = _tracker.createInstance<AugassignContext>(_ctx, getState());
  enterRule(_localctx, 38, Python3Parser::RuleAugassign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    _la = _input->LA(1);
    if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & 4151) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

Python3Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Or_testContext* Python3Parser::ExprContext::or_test() {
  return getRuleContext<Python3Parser::Or_testContext>(0);
}


size_t Python3Parser::ExprContext::getRuleIndex() const {
  return Python3Parser::RuleExpr;
}


std::any Python3Parser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ExprContext* Python3Parser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 40, Python3Parser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    or_test();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_testContext ------------------------------------------------------------------

Python3Parser::Or_testContext::Or_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::And_testContext *> Python3Parser::Or_testContext::and_test() {
  return getRuleContexts<Python3Parser::And_testContext>();
}

Python3Parser::And_testContext* Python3Parser::Or_testContext::and_test(size_t i) {
  return getRuleContext<Python3Parser::And_testContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Or_testContext::OR() {
  return getTokens(Python3Parser::OR);
}

tree::TerminalNode* Python3Parser::Or_testContext::OR(size_t i) {
  return getToken(Python3Parser::OR, i);
}


size_t Python3Parser::Or_testContext::getRuleIndex() const {
  return Python3Parser::RuleOr_test;
}


std::any Python3Parser::Or_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitOr_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Or_testContext* Python3Parser::or_test() {
  Or_testContext *_localctx = _tracker.createInstance<Or_testContext>(_ctx, getState());
  enterRule(_localctx, 42, Python3Parser::RuleOr_test);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    and_test();
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::OR) {
      setState(221);
      match(Python3Parser::OR);
      setState(222);
      and_test();
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_testContext ------------------------------------------------------------------

Python3Parser::And_testContext::And_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Not_testContext *> Python3Parser::And_testContext::not_test() {
  return getRuleContexts<Python3Parser::Not_testContext>();
}

Python3Parser::Not_testContext* Python3Parser::And_testContext::not_test(size_t i) {
  return getRuleContext<Python3Parser::Not_testContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::And_testContext::AND() {
  return getTokens(Python3Parser::AND);
}

tree::TerminalNode* Python3Parser::And_testContext::AND(size_t i) {
  return getToken(Python3Parser::AND, i);
}


size_t Python3Parser::And_testContext::getRuleIndex() const {
  return Python3Parser::RuleAnd_test;
}


std::any Python3Parser::And_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitAnd_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::And_testContext* Python3Parser::and_test() {
  And_testContext *_localctx = _tracker.createInstance<And_testContext>(_ctx, getState());
  enterRule(_localctx, 44, Python3Parser::RuleAnd_test);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    not_test();
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::AND) {
      setState(229);
      match(Python3Parser::AND);
      setState(230);
      not_test();
      setState(235);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Not_testContext ------------------------------------------------------------------

Python3Parser::Not_testContext::Not_testContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Not_testContext::NOT() {
  return getToken(Python3Parser::NOT, 0);
}

Python3Parser::Not_testContext* Python3Parser::Not_testContext::not_test() {
  return getRuleContext<Python3Parser::Not_testContext>(0);
}

Python3Parser::ComparisonContext* Python3Parser::Not_testContext::comparison() {
  return getRuleContext<Python3Parser::ComparisonContext>(0);
}


size_t Python3Parser::Not_testContext::getRuleIndex() const {
  return Python3Parser::RuleNot_test;
}


std::any Python3Parser::Not_testContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitNot_test(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Not_testContext* Python3Parser::not_test() {
  Not_testContext *_localctx = _tracker.createInstance<Not_testContext>(_ctx, getState());
  enterRule(_localctx, 46, Python3Parser::RuleNot_test);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(239);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(236);
        match(Python3Parser::NOT);
        setState(237);
        not_test();
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::PRINT:
      case Python3Parser::INT_TYPE:
      case Python3Parser::FLOAT_TYPE:
      case Python3Parser::STRING_TYPE:
      case Python3Parser::BOOL_TYPE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN:
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(238);
        comparison();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

Python3Parser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::Arith_exprContext *> Python3Parser::ComparisonContext::arith_expr() {
  return getRuleContexts<Python3Parser::Arith_exprContext>();
}

Python3Parser::Arith_exprContext* Python3Parser::ComparisonContext::arith_expr(size_t i) {
  return getRuleContext<Python3Parser::Arith_exprContext>(i);
}

std::vector<Python3Parser::Comp_opContext *> Python3Parser::ComparisonContext::comp_op() {
  return getRuleContexts<Python3Parser::Comp_opContext>();
}

Python3Parser::Comp_opContext* Python3Parser::ComparisonContext::comp_op(size_t i) {
  return getRuleContext<Python3Parser::Comp_opContext>(i);
}


size_t Python3Parser::ComparisonContext::getRuleIndex() const {
  return Python3Parser::RuleComparison;
}


std::any Python3Parser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ComparisonContext* Python3Parser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 48, Python3Parser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    arith_expr();
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & 95) != 0)) {
      setState(242);
      comp_op();
      setState(243);
      arith_expr();
      setState(249);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comp_opContext ------------------------------------------------------------------

Python3Parser::Comp_opContext::Comp_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Comp_opContext::LESS_THAN() {
  return getToken(Python3Parser::LESS_THAN, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::GREATER_THAN() {
  return getToken(Python3Parser::GREATER_THAN, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::EQUALS() {
  return getToken(Python3Parser::EQUALS, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::GT_EQ() {
  return getToken(Python3Parser::GT_EQ, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::LT_EQ() {
  return getToken(Python3Parser::LT_EQ, 0);
}

tree::TerminalNode* Python3Parser::Comp_opContext::NOT_EQ_2() {
  return getToken(Python3Parser::NOT_EQ_2, 0);
}


size_t Python3Parser::Comp_opContext::getRuleIndex() const {
  return Python3Parser::RuleComp_op;
}


std::any Python3Parser::Comp_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitComp_op(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Comp_opContext* Python3Parser::comp_op() {
  Comp_opContext *_localctx = _tracker.createInstance<Comp_opContext>(_ctx, getState());
  enterRule(_localctx, 50, Python3Parser::RuleComp_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    _la = _input->LA(1);
    if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & 95) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arith_exprContext ------------------------------------------------------------------

Python3Parser::Arith_exprContext::Arith_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TermContext *> Python3Parser::Arith_exprContext::term() {
  return getRuleContexts<Python3Parser::TermContext>();
}

Python3Parser::TermContext* Python3Parser::Arith_exprContext::term(size_t i) {
  return getRuleContext<Python3Parser::TermContext>(i);
}

std::vector<Python3Parser::Addorsub_opContext *> Python3Parser::Arith_exprContext::addorsub_op() {
  return getRuleContexts<Python3Parser::Addorsub_opContext>();
}

Python3Parser::Addorsub_opContext* Python3Parser::Arith_exprContext::addorsub_op(size_t i) {
  return getRuleContext<Python3Parser::Addorsub_opContext>(i);
}


size_t Python3Parser::Arith_exprContext::getRuleIndex() const {
  return Python3Parser::RuleArith_expr;
}


std::any Python3Parser::Arith_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitArith_expr(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Arith_exprContext* Python3Parser::arith_expr() {
  Arith_exprContext *_localctx = _tracker.createInstance<Arith_exprContext>(_ctx, getState());
  enterRule(_localctx, 52, Python3Parser::RuleArith_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    term();
    setState(258);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ADD

    || _la == Python3Parser::MINUS) {
      setState(253);
      addorsub_op();
      setState(254);
      term();
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Addorsub_opContext ------------------------------------------------------------------

Python3Parser::Addorsub_opContext::Addorsub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Addorsub_opContext::ADD() {
  return getToken(Python3Parser::ADD, 0);
}

tree::TerminalNode* Python3Parser::Addorsub_opContext::MINUS() {
  return getToken(Python3Parser::MINUS, 0);
}


size_t Python3Parser::Addorsub_opContext::getRuleIndex() const {
  return Python3Parser::RuleAddorsub_op;
}


std::any Python3Parser::Addorsub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitAddorsub_op(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Addorsub_opContext* Python3Parser::addorsub_op() {
  Addorsub_opContext *_localctx = _tracker.createInstance<Addorsub_opContext>(_ctx, getState());
  enterRule(_localctx, 54, Python3Parser::RuleAddorsub_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    _la = _input->LA(1);
    if (!(_la == Python3Parser::ADD

    || _la == Python3Parser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

Python3Parser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::FactorContext *> Python3Parser::TermContext::factor() {
  return getRuleContexts<Python3Parser::FactorContext>();
}

Python3Parser::FactorContext* Python3Parser::TermContext::factor(size_t i) {
  return getRuleContext<Python3Parser::FactorContext>(i);
}

std::vector<Python3Parser::Muldivmod_opContext *> Python3Parser::TermContext::muldivmod_op() {
  return getRuleContexts<Python3Parser::Muldivmod_opContext>();
}

Python3Parser::Muldivmod_opContext* Python3Parser::TermContext::muldivmod_op(size_t i) {
  return getRuleContext<Python3Parser::Muldivmod_opContext>(i);
}


size_t Python3Parser::TermContext::getRuleIndex() const {
  return Python3Parser::RuleTerm;
}


std::any Python3Parser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TermContext* Python3Parser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 56, Python3Parser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    factor();
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 504403708021309440) != 0)) {
      setState(264);
      muldivmod_op();
      setState(265);
      factor();
      setState(271);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Muldivmod_opContext ------------------------------------------------------------------

Python3Parser::Muldivmod_opContext::Muldivmod_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Muldivmod_opContext::STAR() {
  return getToken(Python3Parser::STAR, 0);
}

tree::TerminalNode* Python3Parser::Muldivmod_opContext::DIV() {
  return getToken(Python3Parser::DIV, 0);
}

tree::TerminalNode* Python3Parser::Muldivmod_opContext::IDIV() {
  return getToken(Python3Parser::IDIV, 0);
}

tree::TerminalNode* Python3Parser::Muldivmod_opContext::MOD() {
  return getToken(Python3Parser::MOD, 0);
}


size_t Python3Parser::Muldivmod_opContext::getRuleIndex() const {
  return Python3Parser::RuleMuldivmod_op;
}


std::any Python3Parser::Muldivmod_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitMuldivmod_op(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Muldivmod_opContext* Python3Parser::muldivmod_op() {
  Muldivmod_opContext *_localctx = _tracker.createInstance<Muldivmod_opContext>(_ctx, getState());
  enterRule(_localctx, 58, Python3Parser::RuleMuldivmod_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 504403708021309440) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

Python3Parser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::FactorContext* Python3Parser::FactorContext::factor() {
  return getRuleContext<Python3Parser::FactorContext>(0);
}

tree::TerminalNode* Python3Parser::FactorContext::ADD() {
  return getToken(Python3Parser::ADD, 0);
}

tree::TerminalNode* Python3Parser::FactorContext::MINUS() {
  return getToken(Python3Parser::MINUS, 0);
}

Python3Parser::AtomContext* Python3Parser::FactorContext::atom() {
  return getRuleContext<Python3Parser::AtomContext>(0);
}


size_t Python3Parser::FactorContext::getRuleIndex() const {
  return Python3Parser::RuleFactor;
}


std::any Python3Parser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::FactorContext* Python3Parser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 60, Python3Parser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(274);
        _la = _input->LA(1);
        if (!(_la == Python3Parser::ADD

        || _la == Python3Parser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(275);
        factor();
        break;
      }

      case Python3Parser::STRING:
      case Python3Parser::NUMBER:
      case Python3Parser::NONE:
      case Python3Parser::TRUE:
      case Python3Parser::FALSE:
      case Python3Parser::PRINT:
      case Python3Parser::INT_TYPE:
      case Python3Parser::FLOAT_TYPE:
      case Python3Parser::STRING_TYPE:
      case Python3Parser::BOOL_TYPE:
      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN: {
        enterOuterAlt(_localctx, 2);
        setState(276);
        atom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

Python3Parser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::AtomContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::NUMBER() {
  return getToken(Python3Parser::NUMBER, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::NONE() {
  return getToken(Python3Parser::NONE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::TRUE() {
  return getToken(Python3Parser::TRUE, 0);
}

tree::TerminalNode* Python3Parser::AtomContext::FALSE() {
  return getToken(Python3Parser::FALSE, 0);
}

Python3Parser::Function_callContext* Python3Parser::AtomContext::function_call() {
  return getRuleContext<Python3Parser::Function_callContext>(0);
}

tree::TerminalNode* Python3Parser::AtomContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

Python3Parser::ExprContext* Python3Parser::AtomContext::expr() {
  return getRuleContext<Python3Parser::ExprContext>(0);
}

tree::TerminalNode* Python3Parser::AtomContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

std::vector<tree::TerminalNode *> Python3Parser::AtomContext::STRING() {
  return getTokens(Python3Parser::STRING);
}

tree::TerminalNode* Python3Parser::AtomContext::STRING(size_t i) {
  return getToken(Python3Parser::STRING, i);
}


size_t Python3Parser::AtomContext::getRuleIndex() const {
  return Python3Parser::RuleAtom;
}


std::any Python3Parser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::AtomContext* Python3Parser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 62, Python3Parser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(279);
      match(Python3Parser::NAME);
      break;
    }

    case 2: {
      setState(280);
      match(Python3Parser::NUMBER);
      break;
    }

    case 3: {
      setState(282); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(281);
        match(Python3Parser::STRING);
        setState(284); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == Python3Parser::STRING);
      break;
    }

    case 4: {
      setState(286);
      match(Python3Parser::NONE);
      break;
    }

    case 5: {
      setState(287);
      match(Python3Parser::TRUE);
      break;
    }

    case 6: {
      setState(288);
      match(Python3Parser::FALSE);
      break;
    }

    case 7: {
      setState(289);
      match(Python3Parser::OPEN_PAREN);
      setState(290);
      expr();
      setState(291);
      match(Python3Parser::CLOSE_PAREN);
      break;
    }

    case 8: {
      setState(293);
      function_call();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArglistContext ------------------------------------------------------------------

Python3Parser::ArglistContext::ArglistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::ArgumentContext *> Python3Parser::ArglistContext::argument() {
  return getRuleContexts<Python3Parser::ArgumentContext>();
}

Python3Parser::ArgumentContext* Python3Parser::ArglistContext::argument(size_t i) {
  return getRuleContext<Python3Parser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::ArglistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::ArglistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::ArglistContext::getRuleIndex() const {
  return Python3Parser::RuleArglist;
}


std::any Python3Parser::ArglistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitArglist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ArglistContext* Python3Parser::arglist() {
  ArglistContext *_localctx = _tracker.createInstance<ArglistContext>(_ctx, getState());
  enterRule(_localctx, 64, Python3Parser::RuleArglist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54044295439515672) != 0)) {
      setState(296);
      argument();
      setState(301);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(297);
          match(Python3Parser::COMMA);
          setState(298);
          argument(); 
        }
        setState(303);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      }
      setState(305);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::COMMA) {
        setState(304);
        match(Python3Parser::COMMA);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

Python3Parser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::ExprContext* Python3Parser::ArgumentContext::expr() {
  return getRuleContext<Python3Parser::ExprContext>(0);
}

tree::TerminalNode* Python3Parser::ArgumentContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}

tree::TerminalNode* Python3Parser::ArgumentContext::ASSIGN() {
  return getToken(Python3Parser::ASSIGN, 0);
}


size_t Python3Parser::ArgumentContext::getRuleIndex() const {
  return Python3Parser::RuleArgument;
}


std::any Python3Parser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ArgumentContext* Python3Parser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 66, Python3Parser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(309);
      expr();
      break;
    }

    case 2: {
      setState(310);
      match(Python3Parser::NAME);
      setState(311);
      match(Python3Parser::ASSIGN);
      setState(312);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

Python3Parser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Function_callContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

Python3Parser::ArglistContext* Python3Parser::Function_callContext::arglist() {
  return getRuleContext<Python3Parser::ArglistContext>(0);
}

tree::TerminalNode* Python3Parser::Function_callContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::Builtin_functionContext* Python3Parser::Function_callContext::builtin_function() {
  return getRuleContext<Python3Parser::Builtin_functionContext>(0);
}

Python3Parser::LvalueContext* Python3Parser::Function_callContext::lvalue() {
  return getRuleContext<Python3Parser::LvalueContext>(0);
}


size_t Python3Parser::Function_callContext::getRuleIndex() const {
  return Python3Parser::RuleFunction_call;
}


std::any Python3Parser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Function_callContext* Python3Parser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 68, Python3Parser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::PRINT:
      case Python3Parser::INT_TYPE:
      case Python3Parser::FLOAT_TYPE:
      case Python3Parser::STRING_TYPE:
      case Python3Parser::BOOL_TYPE: {
        setState(315);
        builtin_function();
        break;
      }

      case Python3Parser::NAME:
      case Python3Parser::OPEN_PAREN: {
        setState(316);
        lvalue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(319);
    match(Python3Parser::OPEN_PAREN);
    setState(320);
    arglist();
    setState(321);
    match(Python3Parser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lvalue_tupleContext ------------------------------------------------------------------

Python3Parser::Lvalue_tupleContext::Lvalue_tupleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Lvalue_tupleContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

Python3Parser::Lvalue_tupleContext* Python3Parser::Lvalue_tupleContext::lvalue_tuple() {
  return getRuleContext<Python3Parser::Lvalue_tupleContext>(0);
}

tree::TerminalNode* Python3Parser::Lvalue_tupleContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

std::vector<Python3Parser::LvalueContext *> Python3Parser::Lvalue_tupleContext::lvalue() {
  return getRuleContexts<Python3Parser::LvalueContext>();
}

Python3Parser::LvalueContext* Python3Parser::Lvalue_tupleContext::lvalue(size_t i) {
  return getRuleContext<Python3Parser::LvalueContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::Lvalue_tupleContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::Lvalue_tupleContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::Lvalue_tupleContext::getRuleIndex() const {
  return Python3Parser::RuleLvalue_tuple;
}


std::any Python3Parser::Lvalue_tupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitLvalue_tuple(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Lvalue_tupleContext* Python3Parser::lvalue_tuple() {
  Lvalue_tupleContext *_localctx = _tracker.createInstance<Lvalue_tupleContext>(_ctx, getState());
  enterRule(_localctx, 70, Python3Parser::RuleLvalue_tuple);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(338);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(323);
      match(Python3Parser::OPEN_PAREN);
      setState(324);
      lvalue_tuple();
      setState(325);
      match(Python3Parser::CLOSE_PAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(327);
      lvalue();
      setState(332);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(328);
          match(Python3Parser::COMMA);
          setState(329);
          lvalue(); 
        }
        setState(334);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      }
      setState(336);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::COMMA) {
        setState(335);
        match(Python3Parser::COMMA);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

Python3Parser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::LvalueContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

Python3Parser::LvalueContext* Python3Parser::LvalueContext::lvalue() {
  return getRuleContext<Python3Parser::LvalueContext>(0);
}

tree::TerminalNode* Python3Parser::LvalueContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

tree::TerminalNode* Python3Parser::LvalueContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}


size_t Python3Parser::LvalueContext::getRuleIndex() const {
  return Python3Parser::RuleLvalue;
}


std::any Python3Parser::LvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitLvalue(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::LvalueContext* Python3Parser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 72, Python3Parser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(345);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::OPEN_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(340);
        match(Python3Parser::OPEN_PAREN);
        setState(341);
        lvalue();
        setState(342);
        match(Python3Parser::CLOSE_PAREN);
        break;
      }

      case Python3Parser::NAME: {
        enterOuterAlt(_localctx, 2);
        setState(344);
        match(Python3Parser::NAME);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Builtin_functionContext ------------------------------------------------------------------

Python3Parser::Builtin_functionContext::Builtin_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Python3Parser::Print_functionContext* Python3Parser::Builtin_functionContext::print_function() {
  return getRuleContext<Python3Parser::Print_functionContext>(0);
}

Python3Parser::Int_functionContext* Python3Parser::Builtin_functionContext::int_function() {
  return getRuleContext<Python3Parser::Int_functionContext>(0);
}

Python3Parser::Bool_functionContext* Python3Parser::Builtin_functionContext::bool_function() {
  return getRuleContext<Python3Parser::Bool_functionContext>(0);
}

Python3Parser::Str_functionContext* Python3Parser::Builtin_functionContext::str_function() {
  return getRuleContext<Python3Parser::Str_functionContext>(0);
}

Python3Parser::Float_functionContext* Python3Parser::Builtin_functionContext::float_function() {
  return getRuleContext<Python3Parser::Float_functionContext>(0);
}


size_t Python3Parser::Builtin_functionContext::getRuleIndex() const {
  return Python3Parser::RuleBuiltin_function;
}


std::any Python3Parser::Builtin_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitBuiltin_function(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Builtin_functionContext* Python3Parser::builtin_function() {
  Builtin_functionContext *_localctx = _tracker.createInstance<Builtin_functionContext>(_ctx, getState());
  enterRule(_localctx, 74, Python3Parser::RuleBuiltin_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::PRINT: {
        setState(347);
        print_function();
        break;
      }

      case Python3Parser::INT_TYPE: {
        setState(348);
        int_function();
        break;
      }

      case Python3Parser::BOOL_TYPE: {
        setState(349);
        bool_function();
        break;
      }

      case Python3Parser::STRING_TYPE: {
        setState(350);
        str_function();
        break;
      }

      case Python3Parser::FLOAT_TYPE: {
        setState(351);
        float_function();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_functionContext ------------------------------------------------------------------

Python3Parser::Print_functionContext::Print_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Print_functionContext::PRINT() {
  return getToken(Python3Parser::PRINT, 0);
}


size_t Python3Parser::Print_functionContext::getRuleIndex() const {
  return Python3Parser::RulePrint_function;
}


std::any Python3Parser::Print_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitPrint_function(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Print_functionContext* Python3Parser::print_function() {
  Print_functionContext *_localctx = _tracker.createInstance<Print_functionContext>(_ctx, getState());
  enterRule(_localctx, 76, Python3Parser::RulePrint_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    match(Python3Parser::PRINT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Int_functionContext ------------------------------------------------------------------

Python3Parser::Int_functionContext::Int_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Int_functionContext::INT_TYPE() {
  return getToken(Python3Parser::INT_TYPE, 0);
}


size_t Python3Parser::Int_functionContext::getRuleIndex() const {
  return Python3Parser::RuleInt_function;
}


std::any Python3Parser::Int_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitInt_function(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Int_functionContext* Python3Parser::int_function() {
  Int_functionContext *_localctx = _tracker.createInstance<Int_functionContext>(_ctx, getState());
  enterRule(_localctx, 78, Python3Parser::RuleInt_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(Python3Parser::INT_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_functionContext ------------------------------------------------------------------

Python3Parser::Bool_functionContext::Bool_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Bool_functionContext::BOOL_TYPE() {
  return getToken(Python3Parser::BOOL_TYPE, 0);
}


size_t Python3Parser::Bool_functionContext::getRuleIndex() const {
  return Python3Parser::RuleBool_function;
}


std::any Python3Parser::Bool_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitBool_function(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Bool_functionContext* Python3Parser::bool_function() {
  Bool_functionContext *_localctx = _tracker.createInstance<Bool_functionContext>(_ctx, getState());
  enterRule(_localctx, 80, Python3Parser::RuleBool_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(Python3Parser::BOOL_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Str_functionContext ------------------------------------------------------------------

Python3Parser::Str_functionContext::Str_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Str_functionContext::STRING_TYPE() {
  return getToken(Python3Parser::STRING_TYPE, 0);
}


size_t Python3Parser::Str_functionContext::getRuleIndex() const {
  return Python3Parser::RuleStr_function;
}


std::any Python3Parser::Str_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitStr_function(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Str_functionContext* Python3Parser::str_function() {
  Str_functionContext *_localctx = _tracker.createInstance<Str_functionContext>(_ctx, getState());
  enterRule(_localctx, 82, Python3Parser::RuleStr_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(Python3Parser::STRING_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Float_functionContext ------------------------------------------------------------------

Python3Parser::Float_functionContext::Float_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::Float_functionContext::FLOAT_TYPE() {
  return getToken(Python3Parser::FLOAT_TYPE, 0);
}


size_t Python3Parser::Float_functionContext::getRuleIndex() const {
  return Python3Parser::RuleFloat_function;
}


std::any Python3Parser::Float_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitFloat_function(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::Float_functionContext* Python3Parser::float_function() {
  Float_functionContext *_localctx = _tracker.createInstance<Float_functionContext>(_ctx, getState());
  enterRule(_localctx, 84, Python3Parser::RuleFloat_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(Python3Parser::FLOAT_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void Python3Parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  python3parserParserInitialize();
#else
  ::antlr4::internal::call_once(python3parserParserOnceFlag, python3parserParserInitialize);
#endif
}
