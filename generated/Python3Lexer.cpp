
#include <list>
#include <regex>


// Generated from Python3Lexer.g4 by ANTLR 4.13.1


#include "Python3Lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Python3LexerStaticData final {
  Python3LexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Python3LexerStaticData(const Python3LexerStaticData&) = delete;
  Python3LexerStaticData(Python3LexerStaticData&&) = delete;
  Python3LexerStaticData& operator=(const Python3LexerStaticData&) = delete;
  Python3LexerStaticData& operator=(Python3LexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag python3lexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Python3LexerStaticData *python3lexerLexerStaticData = nullptr;

void python3lexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (python3lexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(python3lexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Python3LexerStaticData>(
    std::vector<std::string>{
      "STRING", "NUMBER", "INTEGER", "DEF", "RETURN", "IF", "ELIF", "ELSE", 
      "WHILE", "FOR", "IN", "OR", "AND", "NOT", "NONE", "TRUE", "FALSE", 
      "CONTINUE", "BREAK", "PRINT", "INT_TYPE", "FLOAT_TYPE", "STRING_TYPE", 
      "BOOL_TYPE", "NEWLINE", "NAME", "STRING_LITERAL", "BYTES_LITERAL", 
      "DECIMAL_INTEGER", "OCT_INTEGER", "HEX_INTEGER", "BIN_INTEGER", "FLOAT_NUMBER", 
      "IMAG_NUMBER", "DOT", "ELLIPSIS", "STAR", "OPEN_PAREN", "CLOSE_PAREN", 
      "COMMA", "COLON", "SEMI_COLON", "POWER", "ASSIGN", "OPEN_BRACK", "CLOSE_BRACK", 
      "OR_OP", "XOR", "AND_OP", "LEFT_SHIFT", "RIGHT_SHIFT", "ADD", "MINUS", 
      "DIV", "MOD", "IDIV", "NOT_OP", "OPEN_BRACE", "CLOSE_BRACE", "LESS_THAN", 
      "GREATER_THAN", "EQUALS", "GT_EQ", "LT_EQ", "NOT_EQ_1", "NOT_EQ_2", 
      "AT", "ARROW", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", "AT_ASSIGN", 
      "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
      "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "POWER_ASSIGN", "IDIV_ASSIGN", 
      "SKIP_", "UNKNOWN_CHAR", "SHORT_STRING", "LONG_STRING", "LONG_STRING_ITEM", 
      "LONG_STRING_CHAR", "STRING_ESCAPE_SEQ", "NON_ZERO_DIGIT", "DIGIT", 
      "OCT_DIGIT", "HEX_DIGIT", "BIN_DIGIT", "POINT_FLOAT", "EXPONENT_FLOAT", 
      "INT_PART", "FRACTION", "EXPONENT", "SHORT_BYTES", "LONG_BYTES", "LONG_BYTES_ITEM", 
      "SHORT_BYTES_CHAR_NO_SINGLE_QUOTE", "SHORT_BYTES_CHAR_NO_DOUBLE_QUOTE", 
      "LONG_BYTES_CHAR", "BYTES_ESCAPE_SEQ", "SPACES", "COMMENT", "LINE_JOINING", 
      "ID_START", "ID_CONTINUE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,85,767,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,
  	7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,98,
  	7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,1,0,
  	1,0,3,0,224,8,0,1,1,1,1,1,1,3,1,229,8,1,1,2,1,2,1,2,1,2,3,2,235,8,2,1,
  	3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,
  	1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,
  	1,24,1,24,3,24,344,8,24,1,24,1,24,3,24,348,8,24,1,24,3,24,351,8,24,3,
  	24,353,8,24,1,24,1,24,1,25,1,25,5,25,359,8,25,10,25,12,25,362,9,25,1,
  	26,1,26,1,26,1,26,1,26,3,26,369,8,26,1,26,1,26,3,26,373,8,26,1,27,1,27,
  	1,27,1,27,1,27,3,27,380,8,27,1,27,1,27,3,27,384,8,27,1,28,1,28,5,28,388,
  	8,28,10,28,12,28,391,9,28,1,28,4,28,394,8,28,11,28,12,28,395,3,28,398,
  	8,28,1,29,1,29,1,29,4,29,403,8,29,11,29,12,29,404,1,30,1,30,1,30,4,30,
  	410,8,30,11,30,12,30,411,1,31,1,31,1,31,4,31,417,8,31,11,31,12,31,418,
  	1,32,1,32,3,32,423,8,32,1,33,1,33,3,33,427,8,33,1,33,1,33,1,34,1,34,1,
  	35,1,35,1,35,1,35,1,36,1,36,1,37,1,37,1,37,1,38,1,38,1,38,1,39,1,39,1,
  	40,1,40,1,41,1,41,1,42,1,42,1,42,1,43,1,43,1,44,1,44,1,44,1,45,1,45,1,
  	45,1,46,1,46,1,47,1,47,1,48,1,48,1,49,1,49,1,49,1,50,1,50,1,50,1,51,1,
  	51,1,52,1,52,1,53,1,53,1,54,1,54,1,55,1,55,1,55,1,56,1,56,1,57,1,57,1,
  	57,1,58,1,58,1,58,1,59,1,59,1,60,1,60,1,61,1,61,1,61,1,62,1,62,1,62,1,
  	63,1,63,1,63,1,64,1,64,1,64,1,65,1,65,1,65,1,66,1,66,1,67,1,67,1,67,1,
  	68,1,68,1,68,1,69,1,69,1,69,1,70,1,70,1,70,1,71,1,71,1,71,1,72,1,72,1,
  	72,1,73,1,73,1,73,1,74,1,74,1,74,1,75,1,75,1,75,1,76,1,76,1,76,1,77,1,
  	77,1,77,1,77,1,78,1,78,1,78,1,78,1,79,1,79,1,79,1,79,1,80,1,80,1,80,1,
  	80,1,81,1,81,1,81,3,81,563,8,81,1,81,1,81,1,82,1,82,1,83,1,83,1,83,5,
  	83,572,8,83,10,83,12,83,575,9,83,1,83,1,83,1,83,1,83,5,83,581,8,83,10,
  	83,12,83,584,9,83,1,83,3,83,587,8,83,1,84,1,84,1,84,1,84,1,84,5,84,594,
  	8,84,10,84,12,84,597,9,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,5,84,
  	607,8,84,10,84,12,84,610,9,84,1,84,1,84,1,84,3,84,615,8,84,1,85,1,85,
  	3,85,619,8,85,1,86,1,86,1,87,1,87,1,87,1,87,3,87,627,8,87,1,88,1,88,1,
  	89,1,89,1,90,1,90,1,91,1,91,1,92,1,92,1,93,3,93,640,8,93,1,93,1,93,1,
  	93,1,93,3,93,646,8,93,1,94,1,94,3,94,650,8,94,1,94,1,94,1,95,4,95,655,
  	8,95,11,95,12,95,656,1,96,1,96,4,96,661,8,96,11,96,12,96,662,1,97,1,97,
  	3,97,667,8,97,1,97,4,97,670,8,97,11,97,12,97,671,1,98,1,98,1,98,5,98,
  	677,8,98,10,98,12,98,680,9,98,1,98,1,98,1,98,1,98,5,98,686,8,98,10,98,
  	12,98,689,9,98,1,98,3,98,692,8,98,1,99,1,99,1,99,1,99,1,99,5,99,699,8,
  	99,10,99,12,99,702,9,99,1,99,1,99,1,99,1,99,1,99,1,99,1,99,1,99,5,99,
  	712,8,99,10,99,12,99,715,9,99,1,99,1,99,1,99,3,99,720,8,99,1,100,1,100,
  	3,100,724,8,100,1,101,3,101,727,8,101,1,102,3,102,730,8,102,1,103,3,103,
  	733,8,103,1,104,1,104,1,104,1,105,4,105,739,8,105,11,105,12,105,740,1,
  	106,1,106,5,106,745,8,106,10,106,12,106,748,9,106,1,107,1,107,3,107,752,
  	8,107,1,107,3,107,755,8,107,1,107,1,107,3,107,759,8,107,1,108,3,108,762,
  	8,108,1,109,1,109,3,109,766,8,109,4,595,608,700,713,0,110,1,3,3,4,5,5,
  	7,6,9,7,11,8,13,9,15,10,17,11,19,12,21,13,23,14,25,15,27,16,29,17,31,
  	18,33,19,35,20,37,21,39,22,41,23,43,24,45,25,47,26,49,27,51,28,53,29,
  	55,30,57,31,59,32,61,33,63,34,65,35,67,36,69,37,71,38,73,39,75,40,77,
  	41,79,42,81,43,83,44,85,45,87,46,89,47,91,48,93,49,95,50,97,51,99,52,
  	101,53,103,54,105,55,107,56,109,57,111,58,113,59,115,60,117,61,119,62,
  	121,63,123,64,125,65,127,66,129,67,131,68,133,69,135,70,137,71,139,72,
  	141,73,143,74,145,75,147,76,149,77,151,78,153,79,155,80,157,81,159,82,
  	161,83,163,84,165,85,167,0,169,0,171,0,173,0,175,0,177,0,179,0,181,0,
  	183,0,185,0,187,0,189,0,191,0,193,0,195,0,197,0,199,0,201,0,203,0,205,
  	0,207,0,209,0,211,0,213,0,215,0,217,0,219,0,1,0,25,6,0,70,70,82,82,85,
  	85,102,102,114,114,117,117,2,0,70,70,102,102,2,0,82,82,114,114,2,0,66,
  	66,98,98,2,0,79,79,111,111,2,0,88,88,120,120,2,0,74,74,106,106,4,0,10,
  	10,12,13,39,39,92,92,4,0,10,10,12,13,34,34,92,92,1,0,92,92,1,0,49,57,
  	1,0,48,57,1,0,48,55,3,0,48,57,65,70,97,102,1,0,48,49,2,0,69,69,101,101,
  	2,0,43,43,45,45,5,0,0,9,11,12,14,38,40,91,93,127,5,0,0,9,11,12,14,33,
  	35,91,93,127,2,0,0,91,93,127,1,0,0,127,2,0,9,9,32,32,2,0,10,10,12,13,
  	295,0,65,90,95,95,97,122,170,170,181,181,186,186,192,214,216,246,248,
  	577,592,705,710,721,736,740,750,750,890,890,902,902,904,906,908,908,910,
  	929,931,974,976,1013,1015,1153,1162,1230,1232,1273,1280,1295,1329,1366,
  	1369,1369,1377,1415,1488,1514,1520,1522,1569,1594,1600,1610,1646,1647,
  	1649,1747,1749,1749,1765,1766,1774,1775,1786,1788,1791,1791,1808,1808,
  	1810,1839,1869,1901,1920,1957,1969,1969,2308,2361,2365,2365,2384,2384,
  	2392,2401,2429,2429,2437,2444,2447,2448,2451,2472,2474,2480,2482,2482,
  	2486,2489,2493,2493,2510,2510,2524,2525,2527,2529,2544,2545,2565,2570,
  	2575,2576,2579,2600,2602,2608,2610,2611,2613,2614,2616,2617,2649,2652,
  	2654,2654,2674,2676,2693,2701,2703,2705,2707,2728,2730,2736,2738,2739,
  	2741,2745,2749,2749,2768,2768,2784,2785,2821,2828,2831,2832,2835,2856,
  	2858,2864,2866,2867,2869,2873,2877,2877,2908,2909,2911,2913,2929,2929,
  	2947,2947,2949,2954,2958,2960,2962,2965,2969,2970,2972,2972,2974,2975,
  	2979,2980,2984,2986,2990,3001,3077,3084,3086,3088,3090,3112,3114,3123,
  	3125,3129,3168,3169,3205,3212,3214,3216,3218,3240,3242,3251,3253,3257,
  	3261,3261,3294,3294,3296,3297,3333,3340,3342,3344,3346,3368,3370,3385,
  	3424,3425,3461,3478,3482,3505,3507,3515,3517,3517,3520,3526,3585,3632,
  	3634,3635,3648,3654,3713,3714,3716,3716,3719,3720,3722,3722,3725,3725,
  	3732,3735,3737,3743,3745,3747,3749,3749,3751,3751,3754,3755,3757,3760,
  	3762,3763,3773,3773,3776,3780,3782,3782,3804,3805,3840,3840,3904,3911,
  	3913,3946,3976,3979,4096,4129,4131,4135,4137,4138,4176,4181,4256,4293,
  	4304,4346,4348,4348,4352,4441,4447,4514,4520,4601,4608,4680,4682,4685,
  	4688,4694,4696,4696,4698,4701,4704,4744,4746,4749,4752,4784,4786,4789,
  	4792,4798,4800,4800,4802,4805,4808,4822,4824,4880,4882,4885,4888,4954,
  	4992,5007,5024,5108,5121,5740,5743,5750,5761,5786,5792,5866,5870,5872,
  	5888,5900,5902,5905,5920,5937,5952,5969,5984,5996,5998,6000,6016,6067,
  	6103,6103,6108,6108,6176,6263,6272,6312,6400,6428,6480,6509,6512,6516,
  	6528,6569,6593,6599,6656,6678,7424,7615,7680,7835,7840,7929,7936,7957,
  	7960,7965,7968,8005,8008,8013,8016,8023,8025,8025,8027,8027,8029,8029,
  	8031,8061,8064,8116,8118,8124,8126,8126,8130,8132,8134,8140,8144,8147,
  	8150,8155,8160,8172,8178,8180,8182,8188,8305,8305,8319,8319,8336,8340,
  	8450,8450,8455,8455,8458,8467,8469,8469,8472,8477,8484,8484,8486,8486,
  	8488,8488,8490,8497,8499,8505,8508,8511,8517,8521,8544,8579,11264,11310,
  	11312,11358,11392,11492,11520,11557,11568,11621,11631,11631,11648,11670,
  	11680,11686,11688,11694,11696,11702,11704,11710,11712,11718,11720,11726,
  	11728,11734,11736,11742,12293,12295,12321,12329,12337,12341,12344,12348,
  	12353,12438,12443,12447,12449,12538,12540,12543,12549,12588,12593,12686,
  	12704,12727,12784,12799,13312,19893,19968,40891,40960,42124,43008,43009,
  	43011,43013,43015,43018,43020,43042,44032,55203,63744,64045,64048,64106,
  	64112,64217,64256,64262,64275,64279,64285,64285,64287,64296,64298,64310,
  	64312,64316,64318,64318,64320,64321,64323,64324,64326,64433,64467,64829,
  	64848,64911,64914,64967,65008,65019,65136,65140,65142,65276,65313,65338,
  	65345,65370,65382,65470,65474,65479,65482,65487,65490,65495,65498,65500,
  	148,0,48,57,768,879,1155,1158,1425,1465,1467,1469,1471,1471,1473,1474,
  	1476,1477,1479,1479,1552,1557,1611,1630,1632,1641,1648,1648,1750,1756,
  	1759,1764,1767,1768,1770,1773,1776,1785,1809,1809,1840,1866,1958,1968,
  	2305,2307,2364,2364,2366,2381,2385,2388,2402,2403,2406,2415,2433,2435,
  	2492,2492,2494,2500,2503,2504,2507,2509,2519,2519,2530,2531,2534,2543,
  	2561,2563,2620,2620,2622,2626,2631,2632,2635,2637,2662,2673,2689,2691,
  	2748,2748,2750,2757,2759,2761,2763,2765,2786,2787,2790,2799,2817,2819,
  	2876,2876,2878,2883,2887,2888,2891,2893,2902,2903,2918,2927,2946,2946,
  	3006,3010,3014,3016,3018,3021,3031,3031,3046,3055,3073,3075,3134,3140,
  	3142,3144,3146,3149,3157,3158,3174,3183,3202,3203,3260,3260,3262,3268,
  	3270,3272,3274,3277,3285,3286,3302,3311,3330,3331,3390,3395,3398,3400,
  	3402,3405,3415,3415,3430,3439,3458,3459,3530,3530,3535,3540,3542,3542,
  	3544,3551,3570,3571,3633,3633,3636,3642,3655,3662,3664,3673,3761,3761,
  	3764,3769,3771,3772,3784,3789,3792,3801,3864,3865,3872,3881,3893,3893,
  	3895,3895,3897,3897,3902,3903,3953,3972,3974,3975,3984,3991,3993,4028,
  	4038,4038,4140,4146,4150,4153,4160,4169,4182,4185,4959,4959,4969,4977,
  	5906,5908,5938,5940,5970,5971,6002,6003,6070,6099,6109,6109,6112,6121,
  	6155,6157,6160,6169,6313,6313,6432,6443,6448,6459,6470,6479,6576,6592,
  	6600,6601,6608,6617,6679,6683,7616,7619,8255,8256,8276,8276,8400,8412,
  	8417,8417,8421,8427,12330,12335,12441,12442,43010,43010,43014,43014,43019,
  	43019,43043,43047,64286,64286,65024,65039,65056,65059,65075,65076,65101,
  	65103,65296,65305,65343,65343,799,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,
  	0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,
  	0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,
  	0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,
  	39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,
  	0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,
  	0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,
  	71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,
  	0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,
  	0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,
  	103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,
  	113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,
  	123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,
  	133,1,0,0,0,0,135,1,0,0,0,0,137,1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,
  	143,1,0,0,0,0,145,1,0,0,0,0,147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,
  	153,1,0,0,0,0,155,1,0,0,0,0,157,1,0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,
  	163,1,0,0,0,0,165,1,0,0,0,1,223,1,0,0,0,3,228,1,0,0,0,5,234,1,0,0,0,7,
  	236,1,0,0,0,9,240,1,0,0,0,11,247,1,0,0,0,13,250,1,0,0,0,15,255,1,0,0,
  	0,17,260,1,0,0,0,19,266,1,0,0,0,21,270,1,0,0,0,23,273,1,0,0,0,25,276,
  	1,0,0,0,27,280,1,0,0,0,29,284,1,0,0,0,31,289,1,0,0,0,33,294,1,0,0,0,35,
  	300,1,0,0,0,37,309,1,0,0,0,39,315,1,0,0,0,41,321,1,0,0,0,43,325,1,0,0,
  	0,45,331,1,0,0,0,47,335,1,0,0,0,49,352,1,0,0,0,51,356,1,0,0,0,53,368,
  	1,0,0,0,55,379,1,0,0,0,57,397,1,0,0,0,59,399,1,0,0,0,61,406,1,0,0,0,63,
  	413,1,0,0,0,65,422,1,0,0,0,67,426,1,0,0,0,69,430,1,0,0,0,71,432,1,0,0,
  	0,73,436,1,0,0,0,75,438,1,0,0,0,77,441,1,0,0,0,79,444,1,0,0,0,81,446,
  	1,0,0,0,83,448,1,0,0,0,85,450,1,0,0,0,87,453,1,0,0,0,89,455,1,0,0,0,91,
  	458,1,0,0,0,93,461,1,0,0,0,95,463,1,0,0,0,97,465,1,0,0,0,99,467,1,0,0,
  	0,101,470,1,0,0,0,103,473,1,0,0,0,105,475,1,0,0,0,107,477,1,0,0,0,109,
  	479,1,0,0,0,111,481,1,0,0,0,113,484,1,0,0,0,115,486,1,0,0,0,117,489,1,
  	0,0,0,119,492,1,0,0,0,121,494,1,0,0,0,123,496,1,0,0,0,125,499,1,0,0,0,
  	127,502,1,0,0,0,129,505,1,0,0,0,131,508,1,0,0,0,133,511,1,0,0,0,135,513,
  	1,0,0,0,137,516,1,0,0,0,139,519,1,0,0,0,141,522,1,0,0,0,143,525,1,0,0,
  	0,145,528,1,0,0,0,147,531,1,0,0,0,149,534,1,0,0,0,151,537,1,0,0,0,153,
  	540,1,0,0,0,155,543,1,0,0,0,157,547,1,0,0,0,159,551,1,0,0,0,161,555,1,
  	0,0,0,163,562,1,0,0,0,165,566,1,0,0,0,167,586,1,0,0,0,169,614,1,0,0,0,
  	171,618,1,0,0,0,173,620,1,0,0,0,175,626,1,0,0,0,177,628,1,0,0,0,179,630,
  	1,0,0,0,181,632,1,0,0,0,183,634,1,0,0,0,185,636,1,0,0,0,187,645,1,0,0,
  	0,189,649,1,0,0,0,191,654,1,0,0,0,193,658,1,0,0,0,195,664,1,0,0,0,197,
  	691,1,0,0,0,199,719,1,0,0,0,201,723,1,0,0,0,203,726,1,0,0,0,205,729,1,
  	0,0,0,207,732,1,0,0,0,209,734,1,0,0,0,211,738,1,0,0,0,213,742,1,0,0,0,
  	215,749,1,0,0,0,217,761,1,0,0,0,219,765,1,0,0,0,221,224,3,53,26,0,222,
  	224,3,55,27,0,223,221,1,0,0,0,223,222,1,0,0,0,224,2,1,0,0,0,225,229,3,
  	5,2,0,226,229,3,65,32,0,227,229,3,67,33,0,228,225,1,0,0,0,228,226,1,0,
  	0,0,228,227,1,0,0,0,229,4,1,0,0,0,230,235,3,57,28,0,231,235,3,59,29,0,
  	232,235,3,61,30,0,233,235,3,63,31,0,234,230,1,0,0,0,234,231,1,0,0,0,234,
  	232,1,0,0,0,234,233,1,0,0,0,235,6,1,0,0,0,236,237,5,100,0,0,237,238,5,
  	101,0,0,238,239,5,102,0,0,239,8,1,0,0,0,240,241,5,114,0,0,241,242,5,101,
  	0,0,242,243,5,116,0,0,243,244,5,117,0,0,244,245,5,114,0,0,245,246,5,110,
  	0,0,246,10,1,0,0,0,247,248,5,105,0,0,248,249,5,102,0,0,249,12,1,0,0,0,
  	250,251,5,101,0,0,251,252,5,108,0,0,252,253,5,105,0,0,253,254,5,102,0,
  	0,254,14,1,0,0,0,255,256,5,101,0,0,256,257,5,108,0,0,257,258,5,115,0,
  	0,258,259,5,101,0,0,259,16,1,0,0,0,260,261,5,119,0,0,261,262,5,104,0,
  	0,262,263,5,105,0,0,263,264,5,108,0,0,264,265,5,101,0,0,265,18,1,0,0,
  	0,266,267,5,102,0,0,267,268,5,111,0,0,268,269,5,114,0,0,269,20,1,0,0,
  	0,270,271,5,105,0,0,271,272,5,110,0,0,272,22,1,0,0,0,273,274,5,111,0,
  	0,274,275,5,114,0,0,275,24,1,0,0,0,276,277,5,97,0,0,277,278,5,110,0,0,
  	278,279,5,100,0,0,279,26,1,0,0,0,280,281,5,110,0,0,281,282,5,111,0,0,
  	282,283,5,116,0,0,283,28,1,0,0,0,284,285,5,78,0,0,285,286,5,111,0,0,286,
  	287,5,110,0,0,287,288,5,101,0,0,288,30,1,0,0,0,289,290,5,84,0,0,290,291,
  	5,114,0,0,291,292,5,117,0,0,292,293,5,101,0,0,293,32,1,0,0,0,294,295,
  	5,70,0,0,295,296,5,97,0,0,296,297,5,108,0,0,297,298,5,115,0,0,298,299,
  	5,101,0,0,299,34,1,0,0,0,300,301,5,99,0,0,301,302,5,111,0,0,302,303,5,
  	110,0,0,303,304,5,116,0,0,304,305,5,105,0,0,305,306,5,110,0,0,306,307,
  	5,117,0,0,307,308,5,101,0,0,308,36,1,0,0,0,309,310,5,98,0,0,310,311,5,
  	114,0,0,311,312,5,101,0,0,312,313,5,97,0,0,313,314,5,107,0,0,314,38,1,
  	0,0,0,315,316,5,112,0,0,316,317,5,114,0,0,317,318,5,105,0,0,318,319,5,
  	110,0,0,319,320,5,116,0,0,320,40,1,0,0,0,321,322,5,105,0,0,322,323,5,
  	110,0,0,323,324,5,116,0,0,324,42,1,0,0,0,325,326,5,102,0,0,326,327,5,
  	108,0,0,327,328,5,111,0,0,328,329,5,97,0,0,329,330,5,116,0,0,330,44,1,
  	0,0,0,331,332,5,115,0,0,332,333,5,116,0,0,333,334,5,114,0,0,334,46,1,
  	0,0,0,335,336,5,98,0,0,336,337,5,111,0,0,337,338,5,111,0,0,338,339,5,
  	108,0,0,339,48,1,0,0,0,340,341,4,24,0,0,341,353,3,211,105,0,342,344,5,
  	13,0,0,343,342,1,0,0,0,343,344,1,0,0,0,344,345,1,0,0,0,345,348,5,10,0,
  	0,346,348,2,12,13,0,347,343,1,0,0,0,347,346,1,0,0,0,348,350,1,0,0,0,349,
  	351,3,211,105,0,350,349,1,0,0,0,350,351,1,0,0,0,351,353,1,0,0,0,352,340,
  	1,0,0,0,352,347,1,0,0,0,353,354,1,0,0,0,354,355,6,24,0,0,355,50,1,0,0,
  	0,356,360,3,217,108,0,357,359,3,219,109,0,358,357,1,0,0,0,359,362,1,0,
  	0,0,360,358,1,0,0,0,360,361,1,0,0,0,361,52,1,0,0,0,362,360,1,0,0,0,363,
  	369,7,0,0,0,364,365,7,1,0,0,365,369,7,2,0,0,366,367,7,2,0,0,367,369,7,
  	1,0,0,368,363,1,0,0,0,368,364,1,0,0,0,368,366,1,0,0,0,368,369,1,0,0,0,
  	369,372,1,0,0,0,370,373,3,167,83,0,371,373,3,169,84,0,372,370,1,0,0,0,
  	372,371,1,0,0,0,373,54,1,0,0,0,374,380,7,3,0,0,375,376,7,3,0,0,376,380,
  	7,2,0,0,377,378,7,2,0,0,378,380,7,3,0,0,379,374,1,0,0,0,379,375,1,0,0,
  	0,379,377,1,0,0,0,380,383,1,0,0,0,381,384,3,197,98,0,382,384,3,199,99,
  	0,383,381,1,0,0,0,383,382,1,0,0,0,384,56,1,0,0,0,385,389,3,177,88,0,386,
  	388,3,179,89,0,387,386,1,0,0,0,388,391,1,0,0,0,389,387,1,0,0,0,389,390,
  	1,0,0,0,390,398,1,0,0,0,391,389,1,0,0,0,392,394,5,48,0,0,393,392,1,0,
  	0,0,394,395,1,0,0,0,395,393,1,0,0,0,395,396,1,0,0,0,396,398,1,0,0,0,397,
  	385,1,0,0,0,397,393,1,0,0,0,398,58,1,0,0,0,399,400,5,48,0,0,400,402,7,
  	4,0,0,401,403,3,181,90,0,402,401,1,0,0,0,403,404,1,0,0,0,404,402,1,0,
  	0,0,404,405,1,0,0,0,405,60,1,0,0,0,406,407,5,48,0,0,407,409,7,5,0,0,408,
  	410,3,183,91,0,409,408,1,0,0,0,410,411,1,0,0,0,411,409,1,0,0,0,411,412,
  	1,0,0,0,412,62,1,0,0,0,413,414,5,48,0,0,414,416,7,3,0,0,415,417,3,185,
  	92,0,416,415,1,0,0,0,417,418,1,0,0,0,418,416,1,0,0,0,418,419,1,0,0,0,
  	419,64,1,0,0,0,420,423,3,187,93,0,421,423,3,189,94,0,422,420,1,0,0,0,
  	422,421,1,0,0,0,423,66,1,0,0,0,424,427,3,65,32,0,425,427,3,191,95,0,426,
  	424,1,0,0,0,426,425,1,0,0,0,427,428,1,0,0,0,428,429,7,6,0,0,429,68,1,
  	0,0,0,430,431,5,46,0,0,431,70,1,0,0,0,432,433,5,46,0,0,433,434,5,46,0,
  	0,434,435,5,46,0,0,435,72,1,0,0,0,436,437,5,42,0,0,437,74,1,0,0,0,438,
  	439,5,40,0,0,439,440,6,37,1,0,440,76,1,0,0,0,441,442,5,41,0,0,442,443,
  	6,38,2,0,443,78,1,0,0,0,444,445,5,44,0,0,445,80,1,0,0,0,446,447,5,58,
  	0,0,447,82,1,0,0,0,448,449,5,59,0,0,449,84,1,0,0,0,450,451,5,42,0,0,451,
  	452,5,42,0,0,452,86,1,0,0,0,453,454,5,61,0,0,454,88,1,0,0,0,455,456,5,
  	91,0,0,456,457,6,44,3,0,457,90,1,0,0,0,458,459,5,93,0,0,459,460,6,45,
  	4,0,460,92,1,0,0,0,461,462,5,124,0,0,462,94,1,0,0,0,463,464,5,94,0,0,
  	464,96,1,0,0,0,465,466,5,38,0,0,466,98,1,0,0,0,467,468,5,60,0,0,468,469,
  	5,60,0,0,469,100,1,0,0,0,470,471,5,62,0,0,471,472,5,62,0,0,472,102,1,
  	0,0,0,473,474,5,43,0,0,474,104,1,0,0,0,475,476,5,45,0,0,476,106,1,0,0,
  	0,477,478,5,47,0,0,478,108,1,0,0,0,479,480,5,37,0,0,480,110,1,0,0,0,481,
  	482,5,47,0,0,482,483,5,47,0,0,483,112,1,0,0,0,484,485,5,126,0,0,485,114,
  	1,0,0,0,486,487,5,123,0,0,487,488,6,57,5,0,488,116,1,0,0,0,489,490,5,
  	125,0,0,490,491,6,58,6,0,491,118,1,0,0,0,492,493,5,60,0,0,493,120,1,0,
  	0,0,494,495,5,62,0,0,495,122,1,0,0,0,496,497,5,61,0,0,497,498,5,61,0,
  	0,498,124,1,0,0,0,499,500,5,62,0,0,500,501,5,61,0,0,501,126,1,0,0,0,502,
  	503,5,60,0,0,503,504,5,61,0,0,504,128,1,0,0,0,505,506,5,60,0,0,506,507,
  	5,62,0,0,507,130,1,0,0,0,508,509,5,33,0,0,509,510,5,61,0,0,510,132,1,
  	0,0,0,511,512,5,64,0,0,512,134,1,0,0,0,513,514,5,45,0,0,514,515,5,62,
  	0,0,515,136,1,0,0,0,516,517,5,43,0,0,517,518,5,61,0,0,518,138,1,0,0,0,
  	519,520,5,45,0,0,520,521,5,61,0,0,521,140,1,0,0,0,522,523,5,42,0,0,523,
  	524,5,61,0,0,524,142,1,0,0,0,525,526,5,64,0,0,526,527,5,61,0,0,527,144,
  	1,0,0,0,528,529,5,47,0,0,529,530,5,61,0,0,530,146,1,0,0,0,531,532,5,37,
  	0,0,532,533,5,61,0,0,533,148,1,0,0,0,534,535,5,38,0,0,535,536,5,61,0,
  	0,536,150,1,0,0,0,537,538,5,124,0,0,538,539,5,61,0,0,539,152,1,0,0,0,
  	540,541,5,94,0,0,541,542,5,61,0,0,542,154,1,0,0,0,543,544,5,60,0,0,544,
  	545,5,60,0,0,545,546,5,61,0,0,546,156,1,0,0,0,547,548,5,62,0,0,548,549,
  	5,62,0,0,549,550,5,61,0,0,550,158,1,0,0,0,551,552,5,42,0,0,552,553,5,
  	42,0,0,553,554,5,61,0,0,554,160,1,0,0,0,555,556,5,47,0,0,556,557,5,47,
  	0,0,557,558,5,61,0,0,558,162,1,0,0,0,559,563,3,211,105,0,560,563,3,213,
  	106,0,561,563,3,215,107,0,562,559,1,0,0,0,562,560,1,0,0,0,562,561,1,0,
  	0,0,563,564,1,0,0,0,564,565,6,81,7,0,565,164,1,0,0,0,566,567,9,0,0,0,
  	567,166,1,0,0,0,568,573,5,39,0,0,569,572,3,175,87,0,570,572,8,7,0,0,571,
  	569,1,0,0,0,571,570,1,0,0,0,572,575,1,0,0,0,573,571,1,0,0,0,573,574,1,
  	0,0,0,574,576,1,0,0,0,575,573,1,0,0,0,576,587,5,39,0,0,577,582,5,34,0,
  	0,578,581,3,175,87,0,579,581,8,8,0,0,580,578,1,0,0,0,580,579,1,0,0,0,
  	581,584,1,0,0,0,582,580,1,0,0,0,582,583,1,0,0,0,583,585,1,0,0,0,584,582,
  	1,0,0,0,585,587,5,34,0,0,586,568,1,0,0,0,586,577,1,0,0,0,587,168,1,0,
  	0,0,588,589,5,39,0,0,589,590,5,39,0,0,590,591,5,39,0,0,591,595,1,0,0,
  	0,592,594,3,171,85,0,593,592,1,0,0,0,594,597,1,0,0,0,595,596,1,0,0,0,
  	595,593,1,0,0,0,596,598,1,0,0,0,597,595,1,0,0,0,598,599,5,39,0,0,599,
  	600,5,39,0,0,600,615,5,39,0,0,601,602,5,34,0,0,602,603,5,34,0,0,603,604,
  	5,34,0,0,604,608,1,0,0,0,605,607,3,171,85,0,606,605,1,0,0,0,607,610,1,
  	0,0,0,608,609,1,0,0,0,608,606,1,0,0,0,609,611,1,0,0,0,610,608,1,0,0,0,
  	611,612,5,34,0,0,612,613,5,34,0,0,613,615,5,34,0,0,614,588,1,0,0,0,614,
  	601,1,0,0,0,615,170,1,0,0,0,616,619,3,173,86,0,617,619,3,175,87,0,618,
  	616,1,0,0,0,618,617,1,0,0,0,619,172,1,0,0,0,620,621,8,9,0,0,621,174,1,
  	0,0,0,622,623,5,92,0,0,623,627,9,0,0,0,624,625,5,92,0,0,625,627,3,49,
  	24,0,626,622,1,0,0,0,626,624,1,0,0,0,627,176,1,0,0,0,628,629,7,10,0,0,
  	629,178,1,0,0,0,630,631,7,11,0,0,631,180,1,0,0,0,632,633,7,12,0,0,633,
  	182,1,0,0,0,634,635,7,13,0,0,635,184,1,0,0,0,636,637,7,14,0,0,637,186,
  	1,0,0,0,638,640,3,191,95,0,639,638,1,0,0,0,639,640,1,0,0,0,640,641,1,
  	0,0,0,641,646,3,193,96,0,642,643,3,191,95,0,643,644,5,46,0,0,644,646,
  	1,0,0,0,645,639,1,0,0,0,645,642,1,0,0,0,646,188,1,0,0,0,647,650,3,191,
  	95,0,648,650,3,187,93,0,649,647,1,0,0,0,649,648,1,0,0,0,650,651,1,0,0,
  	0,651,652,3,195,97,0,652,190,1,0,0,0,653,655,3,179,89,0,654,653,1,0,0,
  	0,655,656,1,0,0,0,656,654,1,0,0,0,656,657,1,0,0,0,657,192,1,0,0,0,658,
  	660,5,46,0,0,659,661,3,179,89,0,660,659,1,0,0,0,661,662,1,0,0,0,662,660,
  	1,0,0,0,662,663,1,0,0,0,663,194,1,0,0,0,664,666,7,15,0,0,665,667,7,16,
  	0,0,666,665,1,0,0,0,666,667,1,0,0,0,667,669,1,0,0,0,668,670,3,179,89,
  	0,669,668,1,0,0,0,670,671,1,0,0,0,671,669,1,0,0,0,671,672,1,0,0,0,672,
  	196,1,0,0,0,673,678,5,39,0,0,674,677,3,203,101,0,675,677,3,209,104,0,
  	676,674,1,0,0,0,676,675,1,0,0,0,677,680,1,0,0,0,678,676,1,0,0,0,678,679,
  	1,0,0,0,679,681,1,0,0,0,680,678,1,0,0,0,681,692,5,39,0,0,682,687,5,34,
  	0,0,683,686,3,205,102,0,684,686,3,209,104,0,685,683,1,0,0,0,685,684,1,
  	0,0,0,686,689,1,0,0,0,687,685,1,0,0,0,687,688,1,0,0,0,688,690,1,0,0,0,
  	689,687,1,0,0,0,690,692,5,34,0,0,691,673,1,0,0,0,691,682,1,0,0,0,692,
  	198,1,0,0,0,693,694,5,39,0,0,694,695,5,39,0,0,695,696,5,39,0,0,696,700,
  	1,0,0,0,697,699,3,201,100,0,698,697,1,0,0,0,699,702,1,0,0,0,700,701,1,
  	0,0,0,700,698,1,0,0,0,701,703,1,0,0,0,702,700,1,0,0,0,703,704,5,39,0,
  	0,704,705,5,39,0,0,705,720,5,39,0,0,706,707,5,34,0,0,707,708,5,34,0,0,
  	708,709,5,34,0,0,709,713,1,0,0,0,710,712,3,201,100,0,711,710,1,0,0,0,
  	712,715,1,0,0,0,713,714,1,0,0,0,713,711,1,0,0,0,714,716,1,0,0,0,715,713,
  	1,0,0,0,716,717,5,34,0,0,717,718,5,34,0,0,718,720,5,34,0,0,719,693,1,
  	0,0,0,719,706,1,0,0,0,720,200,1,0,0,0,721,724,3,207,103,0,722,724,3,209,
  	104,0,723,721,1,0,0,0,723,722,1,0,0,0,724,202,1,0,0,0,725,727,7,17,0,
  	0,726,725,1,0,0,0,727,204,1,0,0,0,728,730,7,18,0,0,729,728,1,0,0,0,730,
  	206,1,0,0,0,731,733,7,19,0,0,732,731,1,0,0,0,733,208,1,0,0,0,734,735,
  	5,92,0,0,735,736,7,20,0,0,736,210,1,0,0,0,737,739,7,21,0,0,738,737,1,
  	0,0,0,739,740,1,0,0,0,740,738,1,0,0,0,740,741,1,0,0,0,741,212,1,0,0,0,
  	742,746,5,35,0,0,743,745,8,22,0,0,744,743,1,0,0,0,745,748,1,0,0,0,746,
  	744,1,0,0,0,746,747,1,0,0,0,747,214,1,0,0,0,748,746,1,0,0,0,749,751,5,
  	92,0,0,750,752,3,211,105,0,751,750,1,0,0,0,751,752,1,0,0,0,752,758,1,
  	0,0,0,753,755,5,13,0,0,754,753,1,0,0,0,754,755,1,0,0,0,755,756,1,0,0,
  	0,756,759,5,10,0,0,757,759,2,12,13,0,758,754,1,0,0,0,758,757,1,0,0,0,
  	759,216,1,0,0,0,760,762,7,23,0,0,761,760,1,0,0,0,762,218,1,0,0,0,763,
  	766,3,217,108,0,764,766,7,24,0,0,765,763,1,0,0,0,765,764,1,0,0,0,766,
  	220,1,0,0,0,58,0,223,228,234,343,347,350,352,360,368,372,379,383,389,
  	395,397,404,411,418,422,426,562,571,573,580,582,586,595,608,614,618,626,
  	639,645,649,656,662,666,671,676,678,685,687,691,700,713,719,723,726,729,
  	732,740,746,751,754,758,761,765,8,1,24,0,1,37,1,1,38,2,1,44,3,1,45,4,
  	1,57,5,1,58,6,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  python3lexerLexerStaticData = staticData.release();
}

}

Python3Lexer::Python3Lexer(CharStream *input) : Lexer(input) {
  Python3Lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *python3lexerLexerStaticData->atn, python3lexerLexerStaticData->decisionToDFA, python3lexerLexerStaticData->sharedContextCache);
}

Python3Lexer::~Python3Lexer() {
  delete _interpreter;
}

std::string Python3Lexer::getGrammarFileName() const {
  return "Python3Lexer.g4";
}

const std::vector<std::string>& Python3Lexer::getRuleNames() const {
  return python3lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& Python3Lexer::getChannelNames() const {
  return python3lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& Python3Lexer::getModeNames() const {
  return python3lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& Python3Lexer::getVocabulary() const {
  return python3lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Python3Lexer::getSerializedATN() const {
  return python3lexerLexerStaticData->serializedATN;
}

const atn::ATN& Python3Lexer::getATN() const {
  return *python3lexerLexerStaticData->atn;
}


void Python3Lexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 24: NEWLINEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 37: OPEN_PARENAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 38: CLOSE_PARENAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 44: OPEN_BRACKAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 45: CLOSE_BRACKAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 57: OPEN_BRACEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 58: CLOSE_BRACEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

bool Python3Lexer::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 24: return NEWLINESempred(antlrcpp::downCast<antlr4::RuleContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

void Python3Lexer::NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0: 
    { // Braces are required inside the switch
    	std::regex re1(R"([^\r\n\f]+)");
    	std::regex re2(R"([\r\n\f]+)");
    	std::string newLine = regex_replace(getText(), re1, "");
    	std::string spaces = regex_replace(getText(), re2, "");
    	int next = _input->LA(1);
    	if (opened > 0 || next == '\r' || next == '\n' || next == '\f' || next == '#') {
    		// If we're inside a list or on a blank line, ignore all indents,
    		// dedents and line breaks.
    		skip();
    	}
    	else {
    		emit(make_CommonToken(NEWLINE, newLine));
    		int indent = getIndentationCount(spaces);
    		int previous = indents.empty() ? 0 : indents.top();
    		if (indent == previous) {
    			// skip indents of the same size as the present indent-size
    			// do nothing
    		}
    		else if (indent > previous) {
    			indents.push(indent);
    			emit(make_CommonToken(Python3Lexer::INDENT, spaces));
    		}
    		else {
    			// Possibly emit more than 1 DEDENT token.
    			while (!indents.empty() && indents.top() > indent) {
    				this->emit(createDedent());
    				indents.pop();
    			}
    		}
    	}
    }
     break;

  default:
    break;
  }
}

void Python3Lexer::OPEN_PARENAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 1: opened++; break;

  default:
    break;
  }
}

void Python3Lexer::CLOSE_PARENAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 2: opened--; break;

  default:
    break;
  }
}

void Python3Lexer::OPEN_BRACKAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 3: opened++; break;

  default:
    break;
  }
}

void Python3Lexer::CLOSE_BRACKAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 4: opened--; break;

  default:
    break;
  }
}

void Python3Lexer::OPEN_BRACEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 5: opened++; break;

  default:
    break;
  }
}

void Python3Lexer::CLOSE_BRACEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 6: opened--; break;

  default:
    break;
  }
}


bool Python3Lexer::NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return atStartOfInput();

  default:
    break;
  }
  return true;
}


void Python3Lexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  python3lexerLexerInitialize();
#else
  ::antlr4::internal::call_once(python3lexerLexerOnceFlag, python3lexerLexerInitialize);
#endif
}
