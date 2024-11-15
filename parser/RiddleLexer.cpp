
// Generated fromRiddle-Language/RiddleLexer.g4 by ANTLR 4.13.1


#include "RiddleLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct RiddleLexerStaticData final {
  RiddleLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RiddleLexerStaticData(const RiddleLexerStaticData&) = delete;
  RiddleLexerStaticData(RiddleLexerStaticData&&) = delete;
  RiddleLexerStaticData& operator=(const RiddleLexerStaticData&) = delete;
  RiddleLexerStaticData& operator=(RiddleLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag riddlelexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
RiddleLexerStaticData *riddlelexerLexerStaticData = nullptr;

void riddlelexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (riddlelexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(riddlelexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RiddleLexerStaticData>(
    std::vector<std::string>{
      "Var", "Val", "For", "While", "If", "Else", "Func", "Return", "Import", 
      "Package", "Class", "Public", "Protected", "Private", "Override", 
      "True", "False", "Static", "Const", "LeftBracket", "RightBracket", 
      "LeftSquare", "RightSquare", "LeftCurly", "RightCurly", "Colon", "Semi", 
      "Comma", "Equal", "Assign", "Greater", "Less", "LeftLeft", "RightRight", 
      "RightRightRight", "Add", "Sub", "Star", "Div", "Mod", "Not", "And", 
      "Or", "Xor", "Dot", "DoubleQuotes", "Quotes", "Endl", "Identifier", 
      "Hexadecimal", "Decimal", "Octal", "Binary", "Float", "IntegerSequence", 
      "HEX_DIGIT", "OCTAL_DIGIT", "BINARY_DIGIT", "DIGIT", "STRING", "ESC", 
      "LINE_COMMENT", "BLOCK_COMMENT", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'var'", "'val'", "'for'", "'while'", "'if'", "'else'", "'fun'", 
      "'return'", "'import'", "'package'", "'class'", "'public'", "'protected'", 
      "'Private'", "'override'", "'true'", "'false'", "'static'", "'const'", 
      "'('", "')'", "'['", "']'", "'{'", "'}'", "':'", "';'", "','", "'=='", 
      "'='", "'>'", "'<'", "'<<'", "'>>'", "'>>>'", "'+'", "'-'", "'*'", 
      "'/'", "'%'", "'!'", "'&'", "'|'", "'^'", "'.'", "'\"'", "'''", "'\\n'"
    },
    std::vector<std::string>{
      "", "Var", "Val", "For", "While", "If", "Else", "Func", "Return", 
      "Import", "Package", "Class", "Public", "Protected", "Private", "Override", 
      "True", "False", "Static", "Const", "LeftBracket", "RightBracket", 
      "LeftSquare", "RightSquare", "LeftCurly", "RightCurly", "Colon", "Semi", 
      "Comma", "Equal", "Assign", "Greater", "Less", "LeftLeft", "RightRight", 
      "RightRightRight", "Add", "Sub", "Star", "Div", "Mod", "Not", "And", 
      "Or", "Xor", "Dot", "DoubleQuotes", "Quotes", "Endl", "Identifier", 
      "Hexadecimal", "Decimal", "Octal", "Binary", "Float", "IntegerSequence", 
      "HEX_DIGIT", "OCTAL_DIGIT", "BINARY_DIGIT", "DIGIT", "STRING", "LINE_COMMENT", 
      "BLOCK_COMMENT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,63,416,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,
  	1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,
  	1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,
  	1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,
  	1,34,1,34,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,
  	1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,44,1,44,1,45,1,45,1,46,1,46,
  	1,47,1,47,1,48,1,48,5,48,311,8,48,10,48,12,48,314,9,48,1,49,1,49,1,49,
  	1,49,1,49,5,49,321,8,49,10,49,12,49,324,9,49,1,50,1,50,1,50,5,50,329,
  	8,50,10,50,12,50,332,9,50,3,50,334,8,50,1,51,1,51,1,51,5,51,339,8,51,
  	10,51,12,51,342,9,51,1,52,1,52,1,52,1,52,1,52,5,52,349,8,52,10,52,12,
  	52,352,9,52,1,53,1,53,1,53,1,53,1,54,4,54,359,8,54,11,54,12,54,360,1,
  	55,1,55,1,56,1,56,1,57,1,57,1,58,1,58,1,59,1,59,1,59,5,59,374,8,59,10,
  	59,12,59,377,9,59,1,59,1,59,1,60,1,60,3,60,383,8,60,1,61,1,61,1,61,1,
  	61,5,61,389,8,61,10,61,12,61,392,9,61,1,61,1,61,1,62,1,62,1,62,1,62,5,
  	62,400,8,62,10,62,12,62,403,9,62,1,62,1,62,1,62,1,62,1,62,1,63,4,63,411,
  	8,63,11,63,12,63,412,1,63,1,63,1,401,0,64,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,
  	61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,
  	42,85,43,87,44,89,45,91,46,93,47,95,48,97,49,99,50,101,51,103,52,105,
  	53,107,54,109,55,111,56,113,57,115,58,117,59,119,60,121,0,123,61,125,
  	62,127,63,1,0,13,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,
  	2,0,49,57,65,70,1,0,49,57,1,0,49,55,2,0,48,57,65,70,1,0,48,55,1,0,48,
  	49,1,0,48,57,4,0,10,10,13,13,34,34,92,92,5,0,34,34,47,47,65,90,92,92,
  	97,122,2,0,10,10,13,13,3,0,9,10,13,13,32,32,426,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,
  	0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,
  	0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,
  	1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,
  	0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,
  	0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,
  	0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,
  	0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,0,1,129,1,0,0,0,3,133,1,0,0,0,
  	5,137,1,0,0,0,7,141,1,0,0,0,9,147,1,0,0,0,11,150,1,0,0,0,13,155,1,0,0,
  	0,15,159,1,0,0,0,17,166,1,0,0,0,19,173,1,0,0,0,21,181,1,0,0,0,23,187,
  	1,0,0,0,25,194,1,0,0,0,27,204,1,0,0,0,29,212,1,0,0,0,31,221,1,0,0,0,33,
  	226,1,0,0,0,35,232,1,0,0,0,37,239,1,0,0,0,39,245,1,0,0,0,41,247,1,0,0,
  	0,43,249,1,0,0,0,45,251,1,0,0,0,47,253,1,0,0,0,49,255,1,0,0,0,51,257,
  	1,0,0,0,53,259,1,0,0,0,55,261,1,0,0,0,57,263,1,0,0,0,59,266,1,0,0,0,61,
  	268,1,0,0,0,63,270,1,0,0,0,65,272,1,0,0,0,67,275,1,0,0,0,69,278,1,0,0,
  	0,71,282,1,0,0,0,73,284,1,0,0,0,75,286,1,0,0,0,77,288,1,0,0,0,79,290,
  	1,0,0,0,81,292,1,0,0,0,83,294,1,0,0,0,85,296,1,0,0,0,87,298,1,0,0,0,89,
  	300,1,0,0,0,91,302,1,0,0,0,93,304,1,0,0,0,95,306,1,0,0,0,97,308,1,0,0,
  	0,99,315,1,0,0,0,101,333,1,0,0,0,103,335,1,0,0,0,105,343,1,0,0,0,107,
  	353,1,0,0,0,109,358,1,0,0,0,111,362,1,0,0,0,113,364,1,0,0,0,115,366,1,
  	0,0,0,117,368,1,0,0,0,119,370,1,0,0,0,121,380,1,0,0,0,123,384,1,0,0,0,
  	125,395,1,0,0,0,127,410,1,0,0,0,129,130,5,118,0,0,130,131,5,97,0,0,131,
  	132,5,114,0,0,132,2,1,0,0,0,133,134,5,118,0,0,134,135,5,97,0,0,135,136,
  	5,108,0,0,136,4,1,0,0,0,137,138,5,102,0,0,138,139,5,111,0,0,139,140,5,
  	114,0,0,140,6,1,0,0,0,141,142,5,119,0,0,142,143,5,104,0,0,143,144,5,105,
  	0,0,144,145,5,108,0,0,145,146,5,101,0,0,146,8,1,0,0,0,147,148,5,105,0,
  	0,148,149,5,102,0,0,149,10,1,0,0,0,150,151,5,101,0,0,151,152,5,108,0,
  	0,152,153,5,115,0,0,153,154,5,101,0,0,154,12,1,0,0,0,155,156,5,102,0,
  	0,156,157,5,117,0,0,157,158,5,110,0,0,158,14,1,0,0,0,159,160,5,114,0,
  	0,160,161,5,101,0,0,161,162,5,116,0,0,162,163,5,117,0,0,163,164,5,114,
  	0,0,164,165,5,110,0,0,165,16,1,0,0,0,166,167,5,105,0,0,167,168,5,109,
  	0,0,168,169,5,112,0,0,169,170,5,111,0,0,170,171,5,114,0,0,171,172,5,116,
  	0,0,172,18,1,0,0,0,173,174,5,112,0,0,174,175,5,97,0,0,175,176,5,99,0,
  	0,176,177,5,107,0,0,177,178,5,97,0,0,178,179,5,103,0,0,179,180,5,101,
  	0,0,180,20,1,0,0,0,181,182,5,99,0,0,182,183,5,108,0,0,183,184,5,97,0,
  	0,184,185,5,115,0,0,185,186,5,115,0,0,186,22,1,0,0,0,187,188,5,112,0,
  	0,188,189,5,117,0,0,189,190,5,98,0,0,190,191,5,108,0,0,191,192,5,105,
  	0,0,192,193,5,99,0,0,193,24,1,0,0,0,194,195,5,112,0,0,195,196,5,114,0,
  	0,196,197,5,111,0,0,197,198,5,116,0,0,198,199,5,101,0,0,199,200,5,99,
  	0,0,200,201,5,116,0,0,201,202,5,101,0,0,202,203,5,100,0,0,203,26,1,0,
  	0,0,204,205,5,80,0,0,205,206,5,114,0,0,206,207,5,105,0,0,207,208,5,118,
  	0,0,208,209,5,97,0,0,209,210,5,116,0,0,210,211,5,101,0,0,211,28,1,0,0,
  	0,212,213,5,111,0,0,213,214,5,118,0,0,214,215,5,101,0,0,215,216,5,114,
  	0,0,216,217,5,114,0,0,217,218,5,105,0,0,218,219,5,100,0,0,219,220,5,101,
  	0,0,220,30,1,0,0,0,221,222,5,116,0,0,222,223,5,114,0,0,223,224,5,117,
  	0,0,224,225,5,101,0,0,225,32,1,0,0,0,226,227,5,102,0,0,227,228,5,97,0,
  	0,228,229,5,108,0,0,229,230,5,115,0,0,230,231,5,101,0,0,231,34,1,0,0,
  	0,232,233,5,115,0,0,233,234,5,116,0,0,234,235,5,97,0,0,235,236,5,116,
  	0,0,236,237,5,105,0,0,237,238,5,99,0,0,238,36,1,0,0,0,239,240,5,99,0,
  	0,240,241,5,111,0,0,241,242,5,110,0,0,242,243,5,115,0,0,243,244,5,116,
  	0,0,244,38,1,0,0,0,245,246,5,40,0,0,246,40,1,0,0,0,247,248,5,41,0,0,248,
  	42,1,0,0,0,249,250,5,91,0,0,250,44,1,0,0,0,251,252,5,93,0,0,252,46,1,
  	0,0,0,253,254,5,123,0,0,254,48,1,0,0,0,255,256,5,125,0,0,256,50,1,0,0,
  	0,257,258,5,58,0,0,258,52,1,0,0,0,259,260,5,59,0,0,260,54,1,0,0,0,261,
  	262,5,44,0,0,262,56,1,0,0,0,263,264,5,61,0,0,264,265,5,61,0,0,265,58,
  	1,0,0,0,266,267,5,61,0,0,267,60,1,0,0,0,268,269,5,62,0,0,269,62,1,0,0,
  	0,270,271,5,60,0,0,271,64,1,0,0,0,272,273,5,60,0,0,273,274,5,60,0,0,274,
  	66,1,0,0,0,275,276,5,62,0,0,276,277,5,62,0,0,277,68,1,0,0,0,278,279,5,
  	62,0,0,279,280,5,62,0,0,280,281,5,62,0,0,281,70,1,0,0,0,282,283,5,43,
  	0,0,283,72,1,0,0,0,284,285,5,45,0,0,285,74,1,0,0,0,286,287,5,42,0,0,287,
  	76,1,0,0,0,288,289,5,47,0,0,289,78,1,0,0,0,290,291,5,37,0,0,291,80,1,
  	0,0,0,292,293,5,33,0,0,293,82,1,0,0,0,294,295,5,38,0,0,295,84,1,0,0,0,
  	296,297,5,124,0,0,297,86,1,0,0,0,298,299,5,94,0,0,299,88,1,0,0,0,300,
  	301,5,46,0,0,301,90,1,0,0,0,302,303,5,34,0,0,303,92,1,0,0,0,304,305,5,
  	39,0,0,305,94,1,0,0,0,306,307,5,10,0,0,307,96,1,0,0,0,308,312,7,0,0,0,
  	309,311,7,1,0,0,310,309,1,0,0,0,311,314,1,0,0,0,312,310,1,0,0,0,312,313,
  	1,0,0,0,313,98,1,0,0,0,314,312,1,0,0,0,315,316,5,48,0,0,316,317,5,120,
  	0,0,317,318,1,0,0,0,318,322,7,2,0,0,319,321,3,111,55,0,320,319,1,0,0,
  	0,321,324,1,0,0,0,322,320,1,0,0,0,322,323,1,0,0,0,323,100,1,0,0,0,324,
  	322,1,0,0,0,325,334,5,48,0,0,326,330,7,3,0,0,327,329,3,117,58,0,328,327,
  	1,0,0,0,329,332,1,0,0,0,330,328,1,0,0,0,330,331,1,0,0,0,331,334,1,0,0,
  	0,332,330,1,0,0,0,333,325,1,0,0,0,333,326,1,0,0,0,334,102,1,0,0,0,335,
  	336,5,48,0,0,336,340,7,4,0,0,337,339,3,113,56,0,338,337,1,0,0,0,339,342,
  	1,0,0,0,340,338,1,0,0,0,340,341,1,0,0,0,341,104,1,0,0,0,342,340,1,0,0,
  	0,343,344,5,48,0,0,344,345,5,98,0,0,345,346,1,0,0,0,346,350,5,49,0,0,
  	347,349,3,115,57,0,348,347,1,0,0,0,349,352,1,0,0,0,350,348,1,0,0,0,350,
  	351,1,0,0,0,351,106,1,0,0,0,352,350,1,0,0,0,353,354,3,101,50,0,354,355,
  	3,89,44,0,355,356,3,109,54,0,356,108,1,0,0,0,357,359,3,117,58,0,358,357,
  	1,0,0,0,359,360,1,0,0,0,360,358,1,0,0,0,360,361,1,0,0,0,361,110,1,0,0,
  	0,362,363,7,5,0,0,363,112,1,0,0,0,364,365,7,6,0,0,365,114,1,0,0,0,366,
  	367,7,7,0,0,367,116,1,0,0,0,368,369,7,8,0,0,369,118,1,0,0,0,370,375,5,
  	34,0,0,371,374,3,121,60,0,372,374,8,9,0,0,373,371,1,0,0,0,373,372,1,0,
  	0,0,374,377,1,0,0,0,375,373,1,0,0,0,375,376,1,0,0,0,376,378,1,0,0,0,377,
  	375,1,0,0,0,378,379,5,34,0,0,379,120,1,0,0,0,380,382,5,92,0,0,381,383,
  	7,10,0,0,382,381,1,0,0,0,383,122,1,0,0,0,384,385,5,47,0,0,385,386,5,47,
  	0,0,386,390,1,0,0,0,387,389,8,11,0,0,388,387,1,0,0,0,389,392,1,0,0,0,
  	390,388,1,0,0,0,390,391,1,0,0,0,391,393,1,0,0,0,392,390,1,0,0,0,393,394,
  	6,61,0,0,394,124,1,0,0,0,395,396,5,47,0,0,396,397,5,42,0,0,397,401,1,
  	0,0,0,398,400,9,0,0,0,399,398,1,0,0,0,400,403,1,0,0,0,401,402,1,0,0,0,
  	401,399,1,0,0,0,402,404,1,0,0,0,403,401,1,0,0,0,404,405,5,42,0,0,405,
  	406,5,47,0,0,406,407,1,0,0,0,407,408,6,62,0,0,408,126,1,0,0,0,409,411,
  	7,12,0,0,410,409,1,0,0,0,411,412,1,0,0,0,412,410,1,0,0,0,412,413,1,0,
  	0,0,413,414,1,0,0,0,414,415,6,63,0,0,415,128,1,0,0,0,14,0,312,322,330,
  	333,340,350,360,373,375,382,390,401,412,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  riddlelexerLexerStaticData = staticData.release();
}

}

RiddleLexer::RiddleLexer(CharStream *input) : Lexer(input) {
  RiddleLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *riddlelexerLexerStaticData->atn, riddlelexerLexerStaticData->decisionToDFA, riddlelexerLexerStaticData->sharedContextCache);
}

RiddleLexer::~RiddleLexer() {
  delete _interpreter;
}

std::string RiddleLexer::getGrammarFileName() const {
  return "RiddleLexer.g4";
}

const std::vector<std::string>& RiddleLexer::getRuleNames() const {
  return riddlelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& RiddleLexer::getChannelNames() const {
  return riddlelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& RiddleLexer::getModeNames() const {
  return riddlelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& RiddleLexer::getVocabulary() const {
  return riddlelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RiddleLexer::getSerializedATN() const {
  return riddlelexerLexerStaticData->serializedATN;
}

const atn::ATN& RiddleLexer::getATN() const {
  return *riddlelexerLexerStaticData->atn;
}




void RiddleLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  riddlelexerLexerInitialize();
#else
  ::antlr4::internal::call_once(riddlelexerLexerOnceFlag, riddlelexerLexerInitialize);
#endif
}
