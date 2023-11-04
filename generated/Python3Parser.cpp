
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
      "funcdef", "parameters", "typedargslist", "tfpdef", "simple_stmt", 
      "small_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", 
      "expr_stmt", "rvalue_tuple", "assign_stmt", "augassign_stmt", "augassign", 
      "expr", "or_test", "and_test", "not_test", "comparison", "comp_op", 
      "arith_expr", "addorsub_op", "term", "muldivmod_op", "factor", "atom", 
      "arglist", "argument", "function_call", "lvalue_tuple", "lvalue", 
      "builtin_function", "print_function", "int_function", "bool_function", 
      "str_function", "float_function"
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
  	4,1,85,359,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,1,0,1,0,5,0,91,8,0,10,0,12,0,94,9,0,1,0,1,0,1,1,1,1,3,1,
  	100,8,1,1,2,1,2,1,2,3,2,105,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,
  	3,116,8,3,10,3,12,3,119,9,3,1,3,1,3,1,3,3,3,124,8,3,1,4,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,4,5,135,8,5,11,5,12,5,136,1,5,1,5,3,5,141,8,5,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,7,1,7,3,7,151,8,7,1,7,1,7,1,8,1,8,1,8,3,8,158,8,8,
  	1,8,1,8,1,8,1,8,3,8,164,8,8,5,8,166,8,8,10,8,12,8,169,9,8,1,9,1,9,1,10,
  	1,10,1,10,1,11,1,11,3,11,178,8,11,1,12,1,12,1,12,3,12,183,8,12,1,13,1,
  	13,1,14,1,14,1,15,1,15,3,15,191,8,15,1,16,1,16,3,16,195,8,16,1,17,1,17,
  	1,17,5,17,200,8,17,10,17,12,17,203,9,17,1,17,3,17,206,8,17,1,18,1,18,
  	1,18,5,18,211,8,18,10,18,12,18,214,9,18,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,20,1,20,1,21,1,21,1,22,1,22,1,22,5,22,229,8,22,10,22,12,22,232,9,22,
  	1,23,1,23,1,23,5,23,237,8,23,10,23,12,23,240,9,23,1,24,1,24,1,24,3,24,
  	245,8,24,1,25,1,25,1,25,1,25,5,25,251,8,25,10,25,12,25,254,9,25,1,26,
  	1,26,1,27,1,27,1,27,1,27,5,27,262,8,27,10,27,12,27,265,9,27,1,28,1,28,
  	1,29,1,29,1,29,1,29,5,29,273,8,29,10,29,12,29,276,9,29,1,30,1,30,1,31,
  	1,31,1,31,3,31,283,8,31,1,32,1,32,1,32,4,32,288,8,32,11,32,12,32,289,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,3,32,300,8,32,1,33,1,33,1,33,
  	5,33,305,8,33,10,33,12,33,308,9,33,1,33,3,33,311,8,33,1,34,1,34,1,34,
  	1,34,3,34,317,8,34,1,35,1,35,3,35,321,8,35,1,35,1,35,3,35,325,8,35,1,
  	35,1,35,1,36,1,36,1,36,5,36,332,8,36,10,36,12,36,335,9,36,1,36,3,36,338,
  	8,36,1,37,1,37,1,38,1,38,1,38,1,38,1,38,3,38,347,8,38,1,39,1,39,1,40,
  	1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,43,0,0,44,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,72,74,76,78,80,82,84,86,0,4,3,0,71,73,75,76,83,83,2,0,62,
  	66,68,68,1,0,54,55,2,0,39,39,56,58,361,0,92,1,0,0,0,2,99,1,0,0,0,4,104,
  	1,0,0,0,6,106,1,0,0,0,8,125,1,0,0,0,10,140,1,0,0,0,12,142,1,0,0,0,14,
  	148,1,0,0,0,16,154,1,0,0,0,18,170,1,0,0,0,20,172,1,0,0,0,22,177,1,0,0,
  	0,24,182,1,0,0,0,26,184,1,0,0,0,28,186,1,0,0,0,30,188,1,0,0,0,32,194,
  	1,0,0,0,34,196,1,0,0,0,36,212,1,0,0,0,38,217,1,0,0,0,40,221,1,0,0,0,42,
  	223,1,0,0,0,44,225,1,0,0,0,46,233,1,0,0,0,48,244,1,0,0,0,50,246,1,0,0,
  	0,52,255,1,0,0,0,54,257,1,0,0,0,56,266,1,0,0,0,58,268,1,0,0,0,60,277,
  	1,0,0,0,62,282,1,0,0,0,64,299,1,0,0,0,66,301,1,0,0,0,68,316,1,0,0,0,70,
  	320,1,0,0,0,72,328,1,0,0,0,74,339,1,0,0,0,76,346,1,0,0,0,78,348,1,0,0,
  	0,80,350,1,0,0,0,82,352,1,0,0,0,84,354,1,0,0,0,86,356,1,0,0,0,88,91,5,
  	27,0,0,89,91,3,2,1,0,90,88,1,0,0,0,90,89,1,0,0,0,91,94,1,0,0,0,92,90,
  	1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,94,92,1,0,0,0,95,96,5,0,0,1,96,1,
  	1,0,0,0,97,100,3,20,10,0,98,100,3,4,2,0,99,97,1,0,0,0,99,98,1,0,0,0,100,
  	3,1,0,0,0,101,105,3,6,3,0,102,105,3,8,4,0,103,105,3,12,6,0,104,101,1,
  	0,0,0,104,102,1,0,0,0,104,103,1,0,0,0,105,5,1,0,0,0,106,107,5,8,0,0,107,
  	108,3,42,21,0,108,109,5,43,0,0,109,117,3,10,5,0,110,111,5,9,0,0,111,112,
  	3,42,21,0,112,113,5,43,0,0,113,114,3,10,5,0,114,116,1,0,0,0,115,110,1,
  	0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,123,1,0,0,0,
  	119,117,1,0,0,0,120,121,5,10,0,0,121,122,5,43,0,0,122,124,3,10,5,0,123,
  	120,1,0,0,0,123,124,1,0,0,0,124,7,1,0,0,0,125,126,5,11,0,0,126,127,3,
  	42,21,0,127,128,5,43,0,0,128,129,3,10,5,0,129,9,1,0,0,0,130,141,3,20,
  	10,0,131,132,5,27,0,0,132,134,5,1,0,0,133,135,3,2,1,0,134,133,1,0,0,0,
  	135,136,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,138,1,0,0,0,138,139,
  	5,2,0,0,139,141,1,0,0,0,140,130,1,0,0,0,140,131,1,0,0,0,141,11,1,0,0,
  	0,142,143,5,6,0,0,143,144,5,28,0,0,144,145,3,14,7,0,145,146,5,43,0,0,
  	146,147,3,10,5,0,147,13,1,0,0,0,148,150,5,40,0,0,149,151,3,16,8,0,150,
  	149,1,0,0,0,150,151,1,0,0,0,151,152,1,0,0,0,152,153,5,41,0,0,153,15,1,
  	0,0,0,154,157,3,18,9,0,155,156,5,46,0,0,156,158,3,42,21,0,157,155,1,0,
  	0,0,157,158,1,0,0,0,158,167,1,0,0,0,159,160,5,42,0,0,160,163,3,18,9,0,
  	161,162,5,46,0,0,162,164,3,42,21,0,163,161,1,0,0,0,163,164,1,0,0,0,164,
  	166,1,0,0,0,165,159,1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,167,168,1,
  	0,0,0,168,17,1,0,0,0,169,167,1,0,0,0,170,171,5,28,0,0,171,19,1,0,0,0,
  	172,173,3,22,11,0,173,174,5,27,0,0,174,21,1,0,0,0,175,178,3,32,16,0,176,
  	178,3,24,12,0,177,175,1,0,0,0,177,176,1,0,0,0,178,23,1,0,0,0,179,183,
  	3,26,13,0,180,183,3,28,14,0,181,183,3,30,15,0,182,179,1,0,0,0,182,180,
  	1,0,0,0,182,181,1,0,0,0,183,25,1,0,0,0,184,185,5,21,0,0,185,27,1,0,0,
  	0,186,187,5,20,0,0,187,29,1,0,0,0,188,190,5,7,0,0,189,191,3,34,17,0,190,
  	189,1,0,0,0,190,191,1,0,0,0,191,31,1,0,0,0,192,195,3,38,19,0,193,195,
  	3,36,18,0,194,192,1,0,0,0,194,193,1,0,0,0,195,33,1,0,0,0,196,201,3,42,
  	21,0,197,198,5,42,0,0,198,200,3,42,21,0,199,197,1,0,0,0,200,203,1,0,0,
  	0,201,199,1,0,0,0,201,202,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,204,
  	206,5,42,0,0,205,204,1,0,0,0,205,206,1,0,0,0,206,35,1,0,0,0,207,208,3,
  	72,36,0,208,209,5,46,0,0,209,211,1,0,0,0,210,207,1,0,0,0,211,214,1,0,
  	0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,215,1,0,0,0,214,212,1,0,0,0,215,
  	216,3,34,17,0,216,37,1,0,0,0,217,218,3,74,37,0,218,219,3,40,20,0,219,
  	220,3,42,21,0,220,39,1,0,0,0,221,222,7,0,0,0,222,41,1,0,0,0,223,224,3,
  	44,22,0,224,43,1,0,0,0,225,230,3,46,23,0,226,227,5,14,0,0,227,229,3,46,
  	23,0,228,226,1,0,0,0,229,232,1,0,0,0,230,228,1,0,0,0,230,231,1,0,0,0,
  	231,45,1,0,0,0,232,230,1,0,0,0,233,238,3,48,24,0,234,235,5,15,0,0,235,
  	237,3,48,24,0,236,234,1,0,0,0,237,240,1,0,0,0,238,236,1,0,0,0,238,239,
  	1,0,0,0,239,47,1,0,0,0,240,238,1,0,0,0,241,242,5,16,0,0,242,245,3,48,
  	24,0,243,245,3,50,25,0,244,241,1,0,0,0,244,243,1,0,0,0,245,49,1,0,0,0,
  	246,252,3,54,27,0,247,248,3,52,26,0,248,249,3,54,27,0,249,251,1,0,0,0,
  	250,247,1,0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,51,
  	1,0,0,0,254,252,1,0,0,0,255,256,7,1,0,0,256,53,1,0,0,0,257,263,3,58,29,
  	0,258,259,3,56,28,0,259,260,3,58,29,0,260,262,1,0,0,0,261,258,1,0,0,0,
  	262,265,1,0,0,0,263,261,1,0,0,0,263,264,1,0,0,0,264,55,1,0,0,0,265,263,
  	1,0,0,0,266,267,7,2,0,0,267,57,1,0,0,0,268,274,3,62,31,0,269,270,3,60,
  	30,0,270,271,3,62,31,0,271,273,1,0,0,0,272,269,1,0,0,0,273,276,1,0,0,
  	0,274,272,1,0,0,0,274,275,1,0,0,0,275,59,1,0,0,0,276,274,1,0,0,0,277,
  	278,7,3,0,0,278,61,1,0,0,0,279,280,7,2,0,0,280,283,3,62,31,0,281,283,
  	3,64,32,0,282,279,1,0,0,0,282,281,1,0,0,0,283,63,1,0,0,0,284,300,5,28,
  	0,0,285,300,5,4,0,0,286,288,5,3,0,0,287,286,1,0,0,0,288,289,1,0,0,0,289,
  	287,1,0,0,0,289,290,1,0,0,0,290,300,1,0,0,0,291,300,5,17,0,0,292,300,
  	5,18,0,0,293,300,5,19,0,0,294,295,5,40,0,0,295,296,3,42,21,0,296,297,
  	5,41,0,0,297,300,1,0,0,0,298,300,3,70,35,0,299,284,1,0,0,0,299,285,1,
  	0,0,0,299,287,1,0,0,0,299,291,1,0,0,0,299,292,1,0,0,0,299,293,1,0,0,0,
  	299,294,1,0,0,0,299,298,1,0,0,0,300,65,1,0,0,0,301,306,3,68,34,0,302,
  	303,5,42,0,0,303,305,3,68,34,0,304,302,1,0,0,0,305,308,1,0,0,0,306,304,
  	1,0,0,0,306,307,1,0,0,0,307,310,1,0,0,0,308,306,1,0,0,0,309,311,5,42,
  	0,0,310,309,1,0,0,0,310,311,1,0,0,0,311,67,1,0,0,0,312,317,3,42,21,0,
  	313,314,5,28,0,0,314,315,5,46,0,0,315,317,3,42,21,0,316,312,1,0,0,0,316,
  	313,1,0,0,0,317,69,1,0,0,0,318,321,3,76,38,0,319,321,3,74,37,0,320,318,
  	1,0,0,0,320,319,1,0,0,0,321,322,1,0,0,0,322,324,5,40,0,0,323,325,3,66,
  	33,0,324,323,1,0,0,0,324,325,1,0,0,0,325,326,1,0,0,0,326,327,5,41,0,0,
  	327,71,1,0,0,0,328,333,3,74,37,0,329,330,5,42,0,0,330,332,3,74,37,0,331,
  	329,1,0,0,0,332,335,1,0,0,0,333,331,1,0,0,0,333,334,1,0,0,0,334,337,1,
  	0,0,0,335,333,1,0,0,0,336,338,5,42,0,0,337,336,1,0,0,0,337,338,1,0,0,
  	0,338,73,1,0,0,0,339,340,5,28,0,0,340,75,1,0,0,0,341,347,3,78,39,0,342,
  	347,3,80,40,0,343,347,3,82,41,0,344,347,3,84,42,0,345,347,3,86,43,0,346,
  	341,1,0,0,0,346,342,1,0,0,0,346,343,1,0,0,0,346,344,1,0,0,0,346,345,1,
  	0,0,0,347,77,1,0,0,0,348,349,5,22,0,0,349,79,1,0,0,0,350,351,5,23,0,0,
  	351,81,1,0,0,0,352,353,5,26,0,0,353,83,1,0,0,0,354,355,5,25,0,0,355,85,
  	1,0,0,0,356,357,5,24,0,0,357,87,1,0,0,0,36,90,92,99,104,117,123,136,140,
  	150,157,163,167,177,182,190,194,201,205,212,230,238,244,252,263,274,282,
  	289,299,306,310,316,320,324,333,337,346
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
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54044295576881624) != 0)) {
      setState(90);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Python3Parser::NEWLINE: {
          setState(88);
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
          setState(89);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
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
    setState(99);
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
        setState(97);
        simple_stmt();
        break;
      }

      case Python3Parser::DEF:
      case Python3Parser::IF:
      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(98);
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
    setState(104);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(101);
        if_stmt();
        break;
      }

      case Python3Parser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(102);
        while_stmt();
        break;
      }

      case Python3Parser::DEF: {
        enterOuterAlt(_localctx, 3);
        setState(103);
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
    setState(106);
    match(Python3Parser::IF);
    setState(107);
    expr();
    setState(108);
    match(Python3Parser::COLON);
    setState(109);
    suite();
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ELIF) {
      setState(110);
      match(Python3Parser::ELIF);
      setState(111);
      expr();
      setState(112);
      match(Python3Parser::COLON);
      setState(113);
      suite();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ELSE) {
      setState(120);
      match(Python3Parser::ELSE);
      setState(121);
      match(Python3Parser::COLON);
      setState(122);
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
    setState(125);
    match(Python3Parser::WHILE);
    setState(126);
    expr();
    setState(127);
    match(Python3Parser::COLON);
    setState(128);
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
    setState(140);
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
        setState(130);
        simple_stmt();
        break;
      }

      case Python3Parser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(131);
        match(Python3Parser::NEWLINE);
        setState(132);
        match(Python3Parser::INDENT);
        setState(134); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(133);
          stmt();
          setState(136); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 54044295442663896) != 0));
        setState(138);
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

Python3Parser::ParametersContext* Python3Parser::FuncdefContext::parameters() {
  return getRuleContext<Python3Parser::ParametersContext>(0);
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
    setState(142);
    match(Python3Parser::DEF);
    setState(143);
    match(Python3Parser::NAME);
    setState(144);
    parameters();
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

//----------------- ParametersContext ------------------------------------------------------------------

Python3Parser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::ParametersContext::OPEN_PAREN() {
  return getToken(Python3Parser::OPEN_PAREN, 0);
}

tree::TerminalNode* Python3Parser::ParametersContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::TypedargslistContext* Python3Parser::ParametersContext::typedargslist() {
  return getRuleContext<Python3Parser::TypedargslistContext>(0);
}


size_t Python3Parser::ParametersContext::getRuleIndex() const {
  return Python3Parser::RuleParameters;
}


std::any Python3Parser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::ParametersContext* Python3Parser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 14, Python3Parser::RuleParameters);
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
    setState(148);
    match(Python3Parser::OPEN_PAREN);
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::NAME) {
      setState(149);
      typedargslist();
    }
    setState(152);
    match(Python3Parser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedargslistContext ------------------------------------------------------------------

Python3Parser::TypedargslistContext::TypedargslistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Python3Parser::TfpdefContext *> Python3Parser::TypedargslistContext::tfpdef() {
  return getRuleContexts<Python3Parser::TfpdefContext>();
}

Python3Parser::TfpdefContext* Python3Parser::TypedargslistContext::tfpdef(size_t i) {
  return getRuleContext<Python3Parser::TfpdefContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TypedargslistContext::ASSIGN() {
  return getTokens(Python3Parser::ASSIGN);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::ASSIGN(size_t i) {
  return getToken(Python3Parser::ASSIGN, i);
}

std::vector<Python3Parser::ExprContext *> Python3Parser::TypedargslistContext::expr() {
  return getRuleContexts<Python3Parser::ExprContext>();
}

Python3Parser::ExprContext* Python3Parser::TypedargslistContext::expr(size_t i) {
  return getRuleContext<Python3Parser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> Python3Parser::TypedargslistContext::COMMA() {
  return getTokens(Python3Parser::COMMA);
}

tree::TerminalNode* Python3Parser::TypedargslistContext::COMMA(size_t i) {
  return getToken(Python3Parser::COMMA, i);
}


size_t Python3Parser::TypedargslistContext::getRuleIndex() const {
  return Python3Parser::RuleTypedargslist;
}


std::any Python3Parser::TypedargslistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitTypedargslist(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TypedargslistContext* Python3Parser::typedargslist() {
  TypedargslistContext *_localctx = _tracker.createInstance<TypedargslistContext>(_ctx, getState());
  enterRule(_localctx, 16, Python3Parser::RuleTypedargslist);
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
    setState(154);
    tfpdef();
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::ASSIGN) {
      setState(155);
      match(Python3Parser::ASSIGN);
      setState(156);
      expr();
    }
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::COMMA) {
      setState(159);
      match(Python3Parser::COMMA);
      setState(160);
      tfpdef();
      setState(163);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Python3Parser::ASSIGN) {
        setState(161);
        match(Python3Parser::ASSIGN);
        setState(162);
        expr();
      }
      setState(169);
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

//----------------- TfpdefContext ------------------------------------------------------------------

Python3Parser::TfpdefContext::TfpdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Python3Parser::TfpdefContext::NAME() {
  return getToken(Python3Parser::NAME, 0);
}


size_t Python3Parser::TfpdefContext::getRuleIndex() const {
  return Python3Parser::RuleTfpdef;
}


std::any Python3Parser::TfpdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Python3ParserVisitor*>(visitor))
    return parserVisitor->visitTfpdef(this);
  else
    return visitor->visitChildren(this);
}

Python3Parser::TfpdefContext* Python3Parser::tfpdef() {
  TfpdefContext *_localctx = _tracker.createInstance<TfpdefContext>(_ctx, getState());
  enterRule(_localctx, 18, Python3Parser::RuleTfpdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(Python3Parser::NAME);
   
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
  enterRule(_localctx, 20, Python3Parser::RuleSimple_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    small_stmt();
    setState(173);
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
  enterRule(_localctx, 22, Python3Parser::RuleSmall_stmt);

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
        setState(175);
        expr_stmt();
        break;
      }

      case Python3Parser::RETURN:
      case Python3Parser::CONTINUE:
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 2);
        setState(176);
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
  enterRule(_localctx, 24, Python3Parser::RuleFlow_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(179);
        break_stmt();
        break;
      }

      case Python3Parser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(180);
        continue_stmt();
        break;
      }

      case Python3Parser::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(181);
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
  enterRule(_localctx, 26, Python3Parser::RuleBreak_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
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
  enterRule(_localctx, 28, Python3Parser::RuleContinue_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
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
  enterRule(_localctx, 30, Python3Parser::RuleReturn_stmt);
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
    setState(188);
    match(Python3Parser::RETURN);
    setState(190);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54044295439515672) != 0)) {
      setState(189);
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
  enterRule(_localctx, 32, Python3Parser::RuleExpr_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      augassign_stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(193);
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
  enterRule(_localctx, 34, Python3Parser::RuleRvalue_tuple);
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
    setState(196);
    expr();
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(197);
        match(Python3Parser::COMMA);
        setState(198);
        expr(); 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(204);
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
  enterRule(_localctx, 36, Python3Parser::RuleAssign_stmt);

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
    setState(212);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(207);
        lvalue_tuple();
        setState(208);
        match(Python3Parser::ASSIGN); 
      }
      setState(214);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(215);
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
  enterRule(_localctx, 38, Python3Parser::RuleAugassign_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    lvalue();
    setState(218);
    augassign();
    setState(219);
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
  enterRule(_localctx, 40, Python3Parser::RuleAugassign);
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
    setState(221);
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
  enterRule(_localctx, 42, Python3Parser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
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
  enterRule(_localctx, 44, Python3Parser::RuleOr_test);
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
    setState(225);
    and_test();
    setState(230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::OR) {
      setState(226);
      match(Python3Parser::OR);
      setState(227);
      and_test();
      setState(232);
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
  enterRule(_localctx, 46, Python3Parser::RuleAnd_test);
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
    setState(233);
    not_test();
    setState(238);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::AND) {
      setState(234);
      match(Python3Parser::AND);
      setState(235);
      not_test();
      setState(240);
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
  enterRule(_localctx, 48, Python3Parser::RuleNot_test);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(241);
        match(Python3Parser::NOT);
        setState(242);
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
        setState(243);
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
  enterRule(_localctx, 50, Python3Parser::RuleComparison);
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
    setState(246);
    arith_expr();
    setState(252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & 95) != 0)) {
      setState(247);
      comp_op();
      setState(248);
      arith_expr();
      setState(254);
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
  enterRule(_localctx, 52, Python3Parser::RuleComp_op);
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
    setState(255);
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
  enterRule(_localctx, 54, Python3Parser::RuleArith_expr);
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
    setState(257);
    term();
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Python3Parser::ADD

    || _la == Python3Parser::MINUS) {
      setState(258);
      addorsub_op();
      setState(259);
      term();
      setState(265);
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
  enterRule(_localctx, 56, Python3Parser::RuleAddorsub_op);
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
    setState(266);
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
  enterRule(_localctx, 58, Python3Parser::RuleTerm);
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
    setState(268);
    factor();
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 504403708021309440) != 0)) {
      setState(269);
      muldivmod_op();
      setState(270);
      factor();
      setState(276);
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
  enterRule(_localctx, 60, Python3Parser::RuleMuldivmod_op);
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
    setState(277);
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
  enterRule(_localctx, 62, Python3Parser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::ADD:
      case Python3Parser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(279);
        _la = _input->LA(1);
        if (!(_la == Python3Parser::ADD

        || _la == Python3Parser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(280);
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
        setState(281);
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
  enterRule(_localctx, 64, Python3Parser::RuleAtom);
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
    setState(299);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(284);
      match(Python3Parser::NAME);
      break;
    }

    case 2: {
      setState(285);
      match(Python3Parser::NUMBER);
      break;
    }

    case 3: {
      setState(287); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(286);
        match(Python3Parser::STRING);
        setState(289); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == Python3Parser::STRING);
      break;
    }

    case 4: {
      setState(291);
      match(Python3Parser::NONE);
      break;
    }

    case 5: {
      setState(292);
      match(Python3Parser::TRUE);
      break;
    }

    case 6: {
      setState(293);
      match(Python3Parser::FALSE);
      break;
    }

    case 7: {
      setState(294);
      match(Python3Parser::OPEN_PAREN);
      setState(295);
      expr();
      setState(296);
      match(Python3Parser::CLOSE_PAREN);
      break;
    }

    case 8: {
      setState(298);
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
  enterRule(_localctx, 66, Python3Parser::RuleArglist);
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
    setState(301);
    argument();
    setState(306);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(302);
        match(Python3Parser::COMMA);
        setState(303);
        argument(); 
      }
      setState(308);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(309);
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
  enterRule(_localctx, 68, Python3Parser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(312);
      expr();
      break;
    }

    case 2: {
      setState(313);
      match(Python3Parser::NAME);
      setState(314);
      match(Python3Parser::ASSIGN);
      setState(315);
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

tree::TerminalNode* Python3Parser::Function_callContext::CLOSE_PAREN() {
  return getToken(Python3Parser::CLOSE_PAREN, 0);
}

Python3Parser::Builtin_functionContext* Python3Parser::Function_callContext::builtin_function() {
  return getRuleContext<Python3Parser::Builtin_functionContext>(0);
}

Python3Parser::LvalueContext* Python3Parser::Function_callContext::lvalue() {
  return getRuleContext<Python3Parser::LvalueContext>(0);
}

Python3Parser::ArglistContext* Python3Parser::Function_callContext::arglist() {
  return getRuleContext<Python3Parser::ArglistContext>(0);
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
  enterRule(_localctx, 70, Python3Parser::RuleFunction_call);
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
    setState(320);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::PRINT:
      case Python3Parser::INT_TYPE:
      case Python3Parser::FLOAT_TYPE:
      case Python3Parser::STRING_TYPE:
      case Python3Parser::BOOL_TYPE: {
        setState(318);
        builtin_function();
        break;
      }

      case Python3Parser::NAME: {
        setState(319);
        lvalue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(322);
    match(Python3Parser::OPEN_PAREN);
    setState(324);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54044295439515672) != 0)) {
      setState(323);
      arglist();
    }
    setState(326);
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
  enterRule(_localctx, 72, Python3Parser::RuleLvalue_tuple);
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
    setState(328);
    lvalue();
    setState(333);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(329);
        match(Python3Parser::COMMA);
        setState(330);
        lvalue(); 
      }
      setState(335);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
    setState(337);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Python3Parser::COMMA) {
      setState(336);
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

//----------------- LvalueContext ------------------------------------------------------------------

Python3Parser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 74, Python3Parser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(Python3Parser::NAME);
   
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
  enterRule(_localctx, 76, Python3Parser::RuleBuiltin_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Python3Parser::PRINT: {
        setState(341);
        print_function();
        break;
      }

      case Python3Parser::INT_TYPE: {
        setState(342);
        int_function();
        break;
      }

      case Python3Parser::BOOL_TYPE: {
        setState(343);
        bool_function();
        break;
      }

      case Python3Parser::STRING_TYPE: {
        setState(344);
        str_function();
        break;
      }

      case Python3Parser::FLOAT_TYPE: {
        setState(345);
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
  enterRule(_localctx, 78, Python3Parser::RulePrint_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
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
  enterRule(_localctx, 80, Python3Parser::RuleInt_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
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
  enterRule(_localctx, 82, Python3Parser::RuleBool_function);

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
  enterRule(_localctx, 84, Python3Parser::RuleStr_function);

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
  enterRule(_localctx, 86, Python3Parser::RuleFloat_function);

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
