
// Generated from C:/Users/wangz/CLionProjects/Riddle-Language/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParserVisitor.h"


/**
 * This class provides an empty implementation of RiddleParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RiddleParserBaseVisitor : public RiddleParserVisitor {
public:

  virtual std::any visitProgram(RiddleParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatment_ed(RiddleParser::Statment_edContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatment(RiddleParser::StatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackStatment(RiddleParser::PackStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportStatment(RiddleParser::ImportStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarStatment(RiddleParser::VarStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncExpr(RiddleParser::FuncExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgsExpr(RiddleParser::ArgsExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineArgs(RiddleParser::DefineArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefine(RiddleParser::FuncDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatment(RiddleParser::ForStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatment(RiddleParser::WhileStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatment(RiddleParser::IfStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatment(RiddleParser::ReturnStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStarExpr(RiddleParser::StarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndAssignExpr(RiddleParser::AndAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelfSubRightExpr(RiddleParser::SelfSubRightExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectExpr(RiddleParser::ObjectExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModExpr(RiddleParser::ModExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegativeExpr(RiddleParser::NegativeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberExpr(RiddleParser::NumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXorAssignExpr(RiddleParser::XorAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubExpr(RiddleParser::SubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGreaterEqualExpr(RiddleParser::GreaterEqualExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitXorExpr(RiddleParser::BitXorExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddAssignExpr(RiddleParser::AddAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrAssignExpr(RiddleParser::OrAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGreaterExpr(RiddleParser::GreaterExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivAssignExpr(RiddleParser::DivAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotEqualExpr(RiddleParser::NotEqualExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelfSubLeftExpr(RiddleParser::SelfSubLeftExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivExpr(RiddleParser::DivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitAndExpr(RiddleParser::BitAndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignExpr(RiddleParser::AssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelfAddRightExpr(RiddleParser::SelfAddRightExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubAssignExpr(RiddleParser::SubAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStarAssignExpr(RiddleParser::StarAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracketExpr(RiddleParser::BracketExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLessExpr(RiddleParser::LessExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrExpr(RiddleParser::OrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftLeftAssignExpr(RiddleParser::LeftLeftAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRightRightAssignExpr(RiddleParser::RightRightAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelfAddLeftExpr(RiddleParser::SelfAddLeftExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLessEqualExpr(RiddleParser::LessEqualExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftLeftExpr(RiddleParser::LeftLeftExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitOrExpr(RiddleParser::BitOrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotExpr(RiddleParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExpr(RiddleParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModAssignExpr(RiddleParser::ModAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositiveExpr(RiddleParser::PositiveExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRightRightExpr(RiddleParser::RightRightExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualExpr(RiddleParser::EqualExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpr(RiddleParser::AndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(RiddleParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(RiddleParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }


};

