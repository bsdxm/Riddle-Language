
// Generated from Riddle-Language/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  RiddleParser : public antlr4::Parser {
public:
  enum {
    Var = 1, Val = 2, For = 3, While = 4, If = 5, Else = 6, Func = 7, Return = 8, 
    Import = 9, Package = 10, Class = 11, Public = 12, Protected = 13, Private = 14, 
    Override = 15, True = 16, False = 17, Static = 18, Const = 19, LeftBracket = 20, 
    RightBracket = 21, LeftSquare = 22, RightSquare = 23, LeftCurly = 24, 
    RightCurly = 25, Colon = 26, Semi = 27, Comma = 28, Equal = 29, Assign = 30, 
    Greater = 31, Less = 32, LeftLeft = 33, RightRight = 34, RightRightRight = 35, 
    Add = 36, Sub = 37, Star = 38, Div = 39, Mod = 40, Not = 41, And = 42, 
    Or = 43, Xor = 44, Dot = 45, DoubleQuotes = 46, Quotes = 47, Endl = 48, 
    Identifier = 49, Hexadecimal = 50, Decimal = 51, Octal = 52, Binary = 53, 
    Float = 54, IntegerSequence = 55, HEX_DIGIT = 56, OCTAL_DIGIT = 57, 
    BINARY_DIGIT = 58, DIGIT = 59, STRING = 60, LINE_COMMENT = 61, BLOCK_COMMENT = 62, 
    WHITESPACE = 63
  };

  enum {
    RuleProgram = 0, RuleStatement_ed = 1, RuleStatement = 2, RulePackStatement = 3, 
    RuleImportStatement = 4, RuleVarDefineStatement = 5, RuleArgsExpr = 6, 
    RuleDefineArgs = 7, RuleFuncDefine = 8, RuleFuncBody = 9, RuleForStatement = 10, 
    RuleWhileStatement = 11, RuleIfStatement = 12, RuleReturnStatement = 13, 
    RuleClassDefine = 14, RuleClassBody = 15, RuleExprPtr = 16, RuleExprPtrParser = 17, 
    RuleExpression = 18, RuleId = 19, RuleNumber = 20, RuleBoolean = 21, 
    RuleString = 22, RuleFloat = 23, RuleInteger = 24, RuleTemplateArg = 25, 
    RuleTemplateArgs = 26, RuleTypeName = 27
  };

  explicit RiddleParser(antlr4::TokenStream *input);

  RiddleParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RiddleParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class Statement_edContext;
  class StatementContext;
  class PackStatementContext;
  class ImportStatementContext;
  class VarDefineStatementContext;
  class ArgsExprContext;
  class DefineArgsContext;
  class FuncDefineContext;
  class FuncBodyContext;
  class ForStatementContext;
  class WhileStatementContext;
  class IfStatementContext;
  class ReturnStatementContext;
  class ClassDefineContext;
  class ClassBodyContext;
  class ExprPtrContext;
  class ExprPtrParserContext;
  class ExpressionContext;
  class IdContext;
  class NumberContext;
  class BooleanContext;
  class StringContext;
  class FloatContext;
  class IntegerContext;
  class TemplateArgContext;
  class TemplateArgsContext;
  class TypeNameContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Statement_edContext *> statement_ed();
    Statement_edContext* statement_ed(size_t i);
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Statement_edContext : public antlr4::ParserRuleContext {
  public:
    Statement_edContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Endl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_edContext* statement_ed();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackStatementContext *packStatement();
    ImportStatementContext *importStatement();
    ClassDefineContext *classDefine();
    FuncDefineContext *funcDefine();
    VarDefineStatementContext *varDefineStatement();
    ForStatementContext *forStatement();
    WhileStatementContext *whileStatement();
    IfStatementContext *ifStatement();
    ReturnStatementContext *returnStatement();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LeftCurly();
    antlr4::tree::TerminalNode *RightCurly();
    std::vector<Statement_edContext *> statement_ed();
    Statement_edContext* statement_ed(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  PackStatementContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::IdContext *packName = nullptr;
    PackStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Package();
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackStatementContext* packStatement();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::IdContext *libName = nullptr;
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  VarDefineStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    RiddleParser::TypeNameContext *type = nullptr;
    RiddleParser::ExpressionContext *value = nullptr;
    VarDefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Identifier();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDefineStatementContext* varDefineStatement();

  class  ArgsExprContext : public antlr4::ParserRuleContext {
  public:
    ArgsExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsExprContext* argsExpr();

  class  DefineArgsContext : public antlr4::ParserRuleContext {
  public:
    DefineArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineArgsContext* defineArgs();

  class  FuncDefineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *funcName = nullptr;
    RiddleParser::DefineArgsContext *args = nullptr;
    RiddleParser::TypeNameContext *returnType = nullptr;
    RiddleParser::FuncBodyContext *body = nullptr;
    FuncDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Func();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *LeftCurly();
    antlr4::tree::TerminalNode *RightCurly();
    antlr4::tree::TerminalNode *Identifier();
    DefineArgsContext *defineArgs();
    FuncBodyContext *funcBody();
    antlr4::tree::TerminalNode *Colon();
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDefineContext* funcDefine();

  class  FuncBodyContext : public antlr4::ParserRuleContext {
  public:
    FuncBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Statement_edContext *> statement_ed();
    Statement_edContext* statement_ed(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncBodyContext* funcBody();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::VarDefineStatementContext *init = nullptr;
    RiddleParser::ExpressionContext *termCond = nullptr;
    RiddleParser::StatementContext *selfVar = nullptr;
    RiddleParser::Statement_edContext *body = nullptr;
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *LeftBracket();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    antlr4::tree::TerminalNode *RightBracket();
    Statement_edContext *statement_ed();
    VarDefineStatementContext *varDefineStatement();
    ExpressionContext *expression();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::ExpressionContext *runCond = nullptr;
    RiddleParser::Statement_edContext *body = nullptr;
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();
    Statement_edContext *statement_ed();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    bool hasElse;
    RiddleParser::ExpressionContext *cond = nullptr;
    RiddleParser::Statement_edContext *body = nullptr;
    RiddleParser::Statement_edContext *elseBody = nullptr;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();
    std::vector<Statement_edContext *> statement_ed();
    Statement_edContext* statement_ed(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::Statement_edContext *result = nullptr;
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    Statement_edContext *statement_ed();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ClassDefineContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::IdContext *className = nullptr;
    RiddleParser::ClassBodyContext *body = nullptr;
    ClassDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *LeftCurly();
    antlr4::tree::TerminalNode *RightCurly();
    IdContext *id();
    ClassBodyContext *classBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDefineContext* classDefine();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Statement_edContext *> statement_ed();
    Statement_edContext* statement_ed(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyContext* classBody();

  class  ExprPtrContext : public antlr4::ParserRuleContext {
  public:
    ExprPtrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprPtrContext() = default;
    void copyFrom(ExprPtrContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FuncExprContext : public ExprPtrContext {
  public:
    FuncExprContext(ExprPtrContext *ctx);

    antlr4::Token *funcName = nullptr;
    RiddleParser::ArgsExprContext *args = nullptr;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Identifier();
    ArgsExprContext *argsExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ObjectExprContext : public ExprPtrContext {
  public:
    ObjectExprContext(ExprPtrContext *ctx);

    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlendExprContext : public ExprPtrContext {
  public:
    BlendExprContext(ExprPtrContext *ctx);

    RiddleParser::ExprPtrContext *parent = nullptr;
    RiddleParser::ExprPtrContext *child = nullptr;
    antlr4::tree::TerminalNode *Dot();
    std::vector<ExprPtrContext *> exprPtr();
    ExprPtrContext* exprPtr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprPtrContext* exprPtr();
  ExprPtrContext* exprPtr(int precedence);
  class  ExprPtrParserContext : public antlr4::ParserRuleContext {
  public:
    ExprPtrParserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprPtrContext *exprPtr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprPtrParserContext* exprPtrParser();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelfSubRightExprContext : public ExpressionContext {
  public:
    SelfSubRightExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *expr = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Sub();
    antlr4::tree::TerminalNode* Sub(size_t i);
    ExprPtrParserContext *exprPtrParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndAssignExprContext : public ExpressionContext {
  public:
    AndAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModExprContext : public ExpressionContext {
  public:
    ModExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Mod();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastExprContext : public ExpressionContext {
  public:
    CastExprContext(ExpressionContext *ctx);

    RiddleParser::TypeNameContext *type = nullptr;
    RiddleParser::ExprPtrParserContext *value = nullptr;
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    TypeNameContext *typeName();
    ExprPtrParserContext *exprPtrParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LShrExprContext : public ExpressionContext {
  public:
    LShrExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *RightRightRight();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegativeExprContext : public ExpressionContext {
  public:
    NegativeExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *expr = nullptr;
    antlr4::tree::TerminalNode *Sub();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberExprContext : public ExpressionContext {
  public:
    NumberExprContext(ExpressionContext *ctx);

    NumberContext *number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulAssignExprContext : public ExpressionContext {
  public:
    MulAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  XorAssignExprContext : public ExpressionContext {
  public:
    XorAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Xor();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubExprContext : public ExpressionContext {
  public:
    SubExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Sub();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GreaterEqualExprContext : public ExpressionContext {
  public:
    GreaterEqualExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Assign();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddAssignExprContext : public ExpressionContext {
  public:
    AddAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Add();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrAssignExprContext : public ExpressionContext {
  public:
    OrAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitXorExprContext : public ExpressionContext {
  public:
    BitXorExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Xor();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PtrExprContext : public ExpressionContext {
  public:
    PtrExprContext(ExpressionContext *ctx);

    ExprPtrParserContext *exprPtrParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringExprContext : public ExpressionContext {
  public:
    StringExprContext(ExpressionContext *ctx);

    StringContext *string();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GreaterExprContext : public ExpressionContext {
  public:
    GreaterExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Greater();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivAssignExprContext : public ExpressionContext {
  public:
    DivAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulExprContext : public ExpressionContext {
  public:
    MulExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Star();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotEqualExprContext : public ExpressionContext {
  public:
    NotEqualExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Assign();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelfSubLeftExprContext : public ExpressionContext {
  public:
    SelfSubLeftExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *expr = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Sub();
    antlr4::tree::TerminalNode* Sub(size_t i);
    ExprPtrParserContext *exprPtrParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivExprContext : public ExpressionContext {
  public:
    DivExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Div();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitAndExprContext : public ExpressionContext {
  public:
    BitAndExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *And();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignExprContext : public ExpressionContext {
  public:
    AssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelfAddRightExprContext : public ExpressionContext {
  public:
    SelfAddRightExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *expr = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Add();
    antlr4::tree::TerminalNode* Add(size_t i);
    ExprPtrParserContext *exprPtrParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubAssignExprContext : public ExpressionContext {
  public:
    SubAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Sub();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BracketExprContext : public ExpressionContext {
  public:
    BracketExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *expr = nullptr;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprContext : public ExpressionContext {
  public:
    BooleanExprContext(ExpressionContext *ctx);

    BooleanContext *boolean();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AShrExprContext : public ExpressionContext {
  public:
    AShrExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *RightRight();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessExprContext : public ExpressionContext {
  public:
    LessExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Less();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrExprContext : public ExpressionContext {
  public:
    OrExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelfAddLeftExprContext : public ExpressionContext {
  public:
    SelfAddLeftExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *expr = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Add();
    antlr4::tree::TerminalNode* Add(size_t i);
    ExprPtrParserContext *exprPtrParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LShrAssignExprContext : public ExpressionContext {
  public:
    LShrAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *RightRightRight();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessEqualExprContext : public ExpressionContext {
  public:
    LessEqualExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Assign();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AShrAssignExprContext : public ExpressionContext {
  public:
    AShrAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *RightRight();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitOrExprContext : public ExpressionContext {
  public:
    BitOrExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Or();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExprContext : public ExpressionContext {
  public:
    NotExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *expr = nullptr;
    antlr4::tree::TerminalNode *Not();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddExprContext : public ExpressionContext {
  public:
    AddExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Add();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShlAssignExprContext : public ExpressionContext {
  public:
    ShlAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *LeftLeft();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModAssignExprContext : public ExpressionContext {
  public:
    ModAssignExprContext(ExpressionContext *ctx);

    RiddleParser::ExprPtrParserContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Assign();
    ExprPtrParserContext *exprPtrParser();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PositiveExprContext : public ExpressionContext {
  public:
    PositiveExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *expr = nullptr;
    antlr4::tree::TerminalNode *Add();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShlExprContext : public ExpressionContext {
  public:
    ShlExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *LeftLeft();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualExprContext : public ExpressionContext {
  public:
    EqualExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Equal();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndExprContext : public ExpressionContext {
  public:
    AndExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdContext* id();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    FloatContext *float_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  BooleanContext : public antlr4::ParserRuleContext {
  public:
    bool value;
    BooleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanContext* boolean();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  FloatContext : public antlr4::ParserRuleContext {
  public:
    double value;
    antlr4::Token *floatToken = nullptr;
    FloatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Float();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatContext* float_();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    int value;
    antlr4::Token *decimalToken = nullptr;
    antlr4::Token *hexadecimalToken = nullptr;
    antlr4::Token *binaryToken = nullptr;
    antlr4::Token *octalToken = nullptr;
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decimal();
    antlr4::tree::TerminalNode *Hexadecimal();
    antlr4::tree::TerminalNode *Binary();
    antlr4::tree::TerminalNode *Octal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerContext* integer();

  class  TemplateArgContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgContext* templateArg();

  class  TemplateArgsContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TemplateArgContext *> templateArg();
    TemplateArgContext* templateArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgsContext* templateArgs();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::TypeNameContext *baseType = nullptr;
    RiddleParser::IdContext *name = nullptr;
    RiddleParser::TemplateArgsContext *args = nullptr;
    RiddleParser::ExpressionContext *size = nullptr;
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgsContext *templateArgs();
    antlr4::tree::TerminalNode *LeftSquare();
    antlr4::tree::TerminalNode *RightSquare();
    TypeNameContext *typeName();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();
  TypeNameContext* typeName(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprPtrSempred(ExprPtrContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool typeNameSempred(TypeNameContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

