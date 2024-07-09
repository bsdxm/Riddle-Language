
// Generated from C:/Users/wangz/CLionProjects/Riddle-Language/RiddleLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  RiddleLexer : public antlr4::Lexer {
public:
  enum {
    Var = 1, For = 2, While = 3, If = 4, Else = 5, Func = 6, Return = 7, 
    Import = 8, Package = 9, Class = 10, Public = 11, Protected = 12, Private = 13, 
    Override = 14, LeftBracket = 15, RightBracket = 16, LeftCurly = 17, 
    RightCurly = 18, Colon = 19, Semi = 20, Comma = 21, Equal = 22, Assign = 23, 
    Greater = 24, Less = 25, LeftLeft = 26, RightRight = 27, Add = 28, Sub = 29, 
    Star = 30, Div = 31, Mod = 32, Not = 33, And = 34, Or = 35, Xor = 36, 
    Dot = 37, Endl = 38, Identifier = 39, Hexadecimal = 40, Decimal = 41, 
    Octal = 42, Binary = 43, IntegerSequence = 44, HEX_DIGIT = 45, OCTAL_DIGIT = 46, 
    BINARY_DIGIT = 47, DIGIT = 48, LINE_COMMENT = 49, BLOCK_COMMENT = 50, 
    WHITESPACE = 51
  };

  explicit RiddleLexer(antlr4::CharStream *input);

  ~RiddleLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};
