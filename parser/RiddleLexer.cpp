
// Generated from C:/Users/wangz/CLionProjects/Riddle-Language/RiddleLexer.g4 by ANTLR 4.13.1


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
      "Var", "For", "While", "If", "Else", "Func", "Return", "Import", "Package", 
      "Class", "Public", "Protected", "Private", "Override", "LeftBracket", 
      "RightBracket", "LeftCurly", "RightCurly", "Colon", "Semi", "Comma", 
      "Equal", "Assign", "Greater", "Less", "LeftLeft", "RightRight", "Add", 
      "Sub", "Star", "Div", "Mod", "Not", "And", "Or", "Xor", "Dot", "Endl", 
      "Identifier", "Hexadecimal", "Decimal", "Octal", "Binary", "IntegerSequence", 
      "HEX_DIGIT", "OCTAL_DIGIT", "BINARY_DIGIT", "DIGIT", "LINE_COMMENT", 
      "BLOCK_COMMENT", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'var'", "'for'", "'while'", "'if'", "'else'", "'func'", "'return'", 
      "'import'", "'package'", "'class'", "'public'", "'protected'", "'Private'", 
      "'override'", "'('", "')'", "'{'", "'}'", "':'", "';'", "','", "'=='", 
      "'='", "'>'", "'<'", "'<<'", "'>>'", "'+'", "'-'", "'*'", "'/'", "'%'", 
      "'!'", "'&'", "'|'", "'^'", "'.'", "'\\n'"
    },
    std::vector<std::string>{
      "", "Var", "For", "While", "If", "Else", "Func", "Return", "Import", 
      "Package", "Class", "Public", "Protected", "Private", "Override", 
      "LeftBracket", "RightBracket", "LeftCurly", "RightCurly", "Colon", 
      "Semi", "Comma", "Equal", "Assign", "Greater", "Less", "LeftLeft", 
      "RightRight", "Add", "Sub", "Star", "Div", "Mod", "Not", "And", "Or", 
      "Xor", "Dot", "Endl", "Identifier", "Hexadecimal", "Decimal", "Octal", 
      "Binary", "IntegerSequence", "HEX_DIGIT", "OCTAL_DIGIT", "BINARY_DIGIT", 
      "DIGIT", "LINE_COMMENT", "BLOCK_COMMENT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,51,333,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,15,
  	1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,
  	1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,
  	1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,
  	1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,5,38,246,8,38,10,38,12,38,249,
  	9,38,1,39,1,39,1,39,1,39,1,39,5,39,256,8,39,10,39,12,39,259,9,39,1,40,
  	1,40,1,40,5,40,264,8,40,10,40,12,40,267,9,40,3,40,269,8,40,1,41,1,41,
  	1,41,5,41,274,8,41,10,41,12,41,277,9,41,1,42,1,42,1,42,1,42,1,42,5,42,
  	284,8,42,10,42,12,42,287,9,42,1,43,4,43,290,8,43,11,43,12,43,291,1,44,
  	1,44,1,45,1,45,1,46,1,46,1,47,1,47,1,48,1,48,1,48,1,48,5,48,306,8,48,
  	10,48,12,48,309,9,48,1,48,1,48,1,49,1,49,1,49,1,49,5,49,317,8,49,10,49,
  	12,49,320,9,49,1,49,1,49,1,49,1,49,1,49,1,50,4,50,328,8,50,11,50,12,50,
  	329,1,50,1,50,1,318,0,51,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,
  	22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,
  	67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,
  	45,91,46,93,47,95,48,97,49,99,50,101,51,1,0,11,3,0,65,90,95,95,97,122,
  	4,0,48,57,65,90,95,95,97,122,2,0,49,57,65,70,1,0,49,57,1,0,49,55,2,0,
  	48,57,65,70,1,0,48,55,1,0,48,49,1,0,48,57,2,0,10,10,13,13,3,0,9,10,13,
  	13,32,32,342,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,
  	1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,
  	0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,
  	1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,
  	0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,
  	0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,
  	1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,1,103,1,0,0,0,3,107,1,
  	0,0,0,5,111,1,0,0,0,7,117,1,0,0,0,9,120,1,0,0,0,11,125,1,0,0,0,13,130,
  	1,0,0,0,15,137,1,0,0,0,17,144,1,0,0,0,19,152,1,0,0,0,21,158,1,0,0,0,23,
  	165,1,0,0,0,25,175,1,0,0,0,27,183,1,0,0,0,29,192,1,0,0,0,31,194,1,0,0,
  	0,33,196,1,0,0,0,35,198,1,0,0,0,37,200,1,0,0,0,39,202,1,0,0,0,41,204,
  	1,0,0,0,43,206,1,0,0,0,45,209,1,0,0,0,47,211,1,0,0,0,49,213,1,0,0,0,51,
  	215,1,0,0,0,53,218,1,0,0,0,55,221,1,0,0,0,57,223,1,0,0,0,59,225,1,0,0,
  	0,61,227,1,0,0,0,63,229,1,0,0,0,65,231,1,0,0,0,67,233,1,0,0,0,69,235,
  	1,0,0,0,71,237,1,0,0,0,73,239,1,0,0,0,75,241,1,0,0,0,77,243,1,0,0,0,79,
  	250,1,0,0,0,81,268,1,0,0,0,83,270,1,0,0,0,85,278,1,0,0,0,87,289,1,0,0,
  	0,89,293,1,0,0,0,91,295,1,0,0,0,93,297,1,0,0,0,95,299,1,0,0,0,97,301,
  	1,0,0,0,99,312,1,0,0,0,101,327,1,0,0,0,103,104,5,118,0,0,104,105,5,97,
  	0,0,105,106,5,114,0,0,106,2,1,0,0,0,107,108,5,102,0,0,108,109,5,111,0,
  	0,109,110,5,114,0,0,110,4,1,0,0,0,111,112,5,119,0,0,112,113,5,104,0,0,
  	113,114,5,105,0,0,114,115,5,108,0,0,115,116,5,101,0,0,116,6,1,0,0,0,117,
  	118,5,105,0,0,118,119,5,102,0,0,119,8,1,0,0,0,120,121,5,101,0,0,121,122,
  	5,108,0,0,122,123,5,115,0,0,123,124,5,101,0,0,124,10,1,0,0,0,125,126,
  	5,102,0,0,126,127,5,117,0,0,127,128,5,110,0,0,128,129,5,99,0,0,129,12,
  	1,0,0,0,130,131,5,114,0,0,131,132,5,101,0,0,132,133,5,116,0,0,133,134,
  	5,117,0,0,134,135,5,114,0,0,135,136,5,110,0,0,136,14,1,0,0,0,137,138,
  	5,105,0,0,138,139,5,109,0,0,139,140,5,112,0,0,140,141,5,111,0,0,141,142,
  	5,114,0,0,142,143,5,116,0,0,143,16,1,0,0,0,144,145,5,112,0,0,145,146,
  	5,97,0,0,146,147,5,99,0,0,147,148,5,107,0,0,148,149,5,97,0,0,149,150,
  	5,103,0,0,150,151,5,101,0,0,151,18,1,0,0,0,152,153,5,99,0,0,153,154,5,
  	108,0,0,154,155,5,97,0,0,155,156,5,115,0,0,156,157,5,115,0,0,157,20,1,
  	0,0,0,158,159,5,112,0,0,159,160,5,117,0,0,160,161,5,98,0,0,161,162,5,
  	108,0,0,162,163,5,105,0,0,163,164,5,99,0,0,164,22,1,0,0,0,165,166,5,112,
  	0,0,166,167,5,114,0,0,167,168,5,111,0,0,168,169,5,116,0,0,169,170,5,101,
  	0,0,170,171,5,99,0,0,171,172,5,116,0,0,172,173,5,101,0,0,173,174,5,100,
  	0,0,174,24,1,0,0,0,175,176,5,80,0,0,176,177,5,114,0,0,177,178,5,105,0,
  	0,178,179,5,118,0,0,179,180,5,97,0,0,180,181,5,116,0,0,181,182,5,101,
  	0,0,182,26,1,0,0,0,183,184,5,111,0,0,184,185,5,118,0,0,185,186,5,101,
  	0,0,186,187,5,114,0,0,187,188,5,114,0,0,188,189,5,105,0,0,189,190,5,100,
  	0,0,190,191,5,101,0,0,191,28,1,0,0,0,192,193,5,40,0,0,193,30,1,0,0,0,
  	194,195,5,41,0,0,195,32,1,0,0,0,196,197,5,123,0,0,197,34,1,0,0,0,198,
  	199,5,125,0,0,199,36,1,0,0,0,200,201,5,58,0,0,201,38,1,0,0,0,202,203,
  	5,59,0,0,203,40,1,0,0,0,204,205,5,44,0,0,205,42,1,0,0,0,206,207,5,61,
  	0,0,207,208,5,61,0,0,208,44,1,0,0,0,209,210,5,61,0,0,210,46,1,0,0,0,211,
  	212,5,62,0,0,212,48,1,0,0,0,213,214,5,60,0,0,214,50,1,0,0,0,215,216,5,
  	60,0,0,216,217,5,60,0,0,217,52,1,0,0,0,218,219,5,62,0,0,219,220,5,62,
  	0,0,220,54,1,0,0,0,221,222,5,43,0,0,222,56,1,0,0,0,223,224,5,45,0,0,224,
  	58,1,0,0,0,225,226,5,42,0,0,226,60,1,0,0,0,227,228,5,47,0,0,228,62,1,
  	0,0,0,229,230,5,37,0,0,230,64,1,0,0,0,231,232,5,33,0,0,232,66,1,0,0,0,
  	233,234,5,38,0,0,234,68,1,0,0,0,235,236,5,124,0,0,236,70,1,0,0,0,237,
  	238,5,94,0,0,238,72,1,0,0,0,239,240,5,46,0,0,240,74,1,0,0,0,241,242,5,
  	10,0,0,242,76,1,0,0,0,243,247,7,0,0,0,244,246,7,1,0,0,245,244,1,0,0,0,
  	246,249,1,0,0,0,247,245,1,0,0,0,247,248,1,0,0,0,248,78,1,0,0,0,249,247,
  	1,0,0,0,250,251,5,48,0,0,251,252,5,120,0,0,252,253,1,0,0,0,253,257,7,
  	2,0,0,254,256,3,89,44,0,255,254,1,0,0,0,256,259,1,0,0,0,257,255,1,0,0,
  	0,257,258,1,0,0,0,258,80,1,0,0,0,259,257,1,0,0,0,260,269,5,48,0,0,261,
  	265,7,3,0,0,262,264,3,95,47,0,263,262,1,0,0,0,264,267,1,0,0,0,265,263,
  	1,0,0,0,265,266,1,0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,268,260,1,0,0,
  	0,268,261,1,0,0,0,269,82,1,0,0,0,270,271,5,48,0,0,271,275,7,4,0,0,272,
  	274,3,91,45,0,273,272,1,0,0,0,274,277,1,0,0,0,275,273,1,0,0,0,275,276,
  	1,0,0,0,276,84,1,0,0,0,277,275,1,0,0,0,278,279,5,48,0,0,279,280,5,98,
  	0,0,280,281,1,0,0,0,281,285,5,49,0,0,282,284,3,93,46,0,283,282,1,0,0,
  	0,284,287,1,0,0,0,285,283,1,0,0,0,285,286,1,0,0,0,286,86,1,0,0,0,287,
  	285,1,0,0,0,288,290,3,95,47,0,289,288,1,0,0,0,290,291,1,0,0,0,291,289,
  	1,0,0,0,291,292,1,0,0,0,292,88,1,0,0,0,293,294,7,5,0,0,294,90,1,0,0,0,
  	295,296,7,6,0,0,296,92,1,0,0,0,297,298,7,7,0,0,298,94,1,0,0,0,299,300,
  	7,8,0,0,300,96,1,0,0,0,301,302,5,47,0,0,302,303,5,47,0,0,303,307,1,0,
  	0,0,304,306,8,9,0,0,305,304,1,0,0,0,306,309,1,0,0,0,307,305,1,0,0,0,307,
  	308,1,0,0,0,308,310,1,0,0,0,309,307,1,0,0,0,310,311,6,48,0,0,311,98,1,
  	0,0,0,312,313,5,47,0,0,313,314,5,42,0,0,314,318,1,0,0,0,315,317,9,0,0,
  	0,316,315,1,0,0,0,317,320,1,0,0,0,318,319,1,0,0,0,318,316,1,0,0,0,319,
  	321,1,0,0,0,320,318,1,0,0,0,321,322,5,42,0,0,322,323,5,47,0,0,323,324,
  	1,0,0,0,324,325,6,49,0,0,325,100,1,0,0,0,326,328,7,10,0,0,327,326,1,0,
  	0,0,328,329,1,0,0,0,329,327,1,0,0,0,329,330,1,0,0,0,330,331,1,0,0,0,331,
  	332,6,50,0,0,332,102,1,0,0,0,11,0,247,257,265,268,275,285,291,307,318,
  	329,1,6,0,0
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
