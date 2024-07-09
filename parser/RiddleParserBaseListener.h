
// Generated from C:/Users/wangz/CLionProjects/Riddle-Language/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParserListener.h"


/**
 * This class provides an empty implementation of RiddleParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RiddleParserBaseListener : public RiddleParserListener {
public:

  virtual void enterProgram(RiddleParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(RiddleParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatment_ed(RiddleParser::Statment_edContext * /*ctx*/) override { }
  virtual void exitStatment_ed(RiddleParser::Statment_edContext * /*ctx*/) override { }

  virtual void enterStatment(RiddleParser::StatmentContext * /*ctx*/) override { }
  virtual void exitStatment(RiddleParser::StatmentContext * /*ctx*/) override { }

  virtual void enterPackStatment(RiddleParser::PackStatmentContext * /*ctx*/) override { }
  virtual void exitPackStatment(RiddleParser::PackStatmentContext * /*ctx*/) override { }

  virtual void enterImportStatment(RiddleParser::ImportStatmentContext * /*ctx*/) override { }
  virtual void exitImportStatment(RiddleParser::ImportStatmentContext * /*ctx*/) override { }

  virtual void enterVarStatment(RiddleParser::VarStatmentContext * /*ctx*/) override { }
  virtual void exitVarStatment(RiddleParser::VarStatmentContext * /*ctx*/) override { }

  virtual void enterFuncExpr(RiddleParser::FuncExprContext * /*ctx*/) override { }
  virtual void exitFuncExpr(RiddleParser::FuncExprContext * /*ctx*/) override { }

  virtual void enterArgsExpr(RiddleParser::ArgsExprContext * /*ctx*/) override { }
  virtual void exitArgsExpr(RiddleParser::ArgsExprContext * /*ctx*/) override { }

  virtual void enterDefineArgs(RiddleParser::DefineArgsContext * /*ctx*/) override { }
  virtual void exitDefineArgs(RiddleParser::DefineArgsContext * /*ctx*/) override { }

  virtual void enterFuncDefine(RiddleParser::FuncDefineContext * /*ctx*/) override { }
  virtual void exitFuncDefine(RiddleParser::FuncDefineContext * /*ctx*/) override { }

  virtual void enterForStatment(RiddleParser::ForStatmentContext * /*ctx*/) override { }
  virtual void exitForStatment(RiddleParser::ForStatmentContext * /*ctx*/) override { }

  virtual void enterWhileStatment(RiddleParser::WhileStatmentContext * /*ctx*/) override { }
  virtual void exitWhileStatment(RiddleParser::WhileStatmentContext * /*ctx*/) override { }

  virtual void enterIfStatment(RiddleParser::IfStatmentContext * /*ctx*/) override { }
  virtual void exitIfStatment(RiddleParser::IfStatmentContext * /*ctx*/) override { }

  virtual void enterReturnStatment(RiddleParser::ReturnStatmentContext * /*ctx*/) override { }
  virtual void exitReturnStatment(RiddleParser::ReturnStatmentContext * /*ctx*/) override { }

  virtual void enterStarExpr(RiddleParser::StarExprContext * /*ctx*/) override { }
  virtual void exitStarExpr(RiddleParser::StarExprContext * /*ctx*/) override { }

  virtual void enterAndAssignExpr(RiddleParser::AndAssignExprContext * /*ctx*/) override { }
  virtual void exitAndAssignExpr(RiddleParser::AndAssignExprContext * /*ctx*/) override { }

  virtual void enterSelfSubRightExpr(RiddleParser::SelfSubRightExprContext * /*ctx*/) override { }
  virtual void exitSelfSubRightExpr(RiddleParser::SelfSubRightExprContext * /*ctx*/) override { }

  virtual void enterObjectExpr(RiddleParser::ObjectExprContext * /*ctx*/) override { }
  virtual void exitObjectExpr(RiddleParser::ObjectExprContext * /*ctx*/) override { }

  virtual void enterModExpr(RiddleParser::ModExprContext * /*ctx*/) override { }
  virtual void exitModExpr(RiddleParser::ModExprContext * /*ctx*/) override { }

  virtual void enterNegativeExpr(RiddleParser::NegativeExprContext * /*ctx*/) override { }
  virtual void exitNegativeExpr(RiddleParser::NegativeExprContext * /*ctx*/) override { }

  virtual void enterNumberExpr(RiddleParser::NumberExprContext * /*ctx*/) override { }
  virtual void exitNumberExpr(RiddleParser::NumberExprContext * /*ctx*/) override { }

  virtual void enterXorAssignExpr(RiddleParser::XorAssignExprContext * /*ctx*/) override { }
  virtual void exitXorAssignExpr(RiddleParser::XorAssignExprContext * /*ctx*/) override { }

  virtual void enterSubExpr(RiddleParser::SubExprContext * /*ctx*/) override { }
  virtual void exitSubExpr(RiddleParser::SubExprContext * /*ctx*/) override { }

  virtual void enterGreaterEqualExpr(RiddleParser::GreaterEqualExprContext * /*ctx*/) override { }
  virtual void exitGreaterEqualExpr(RiddleParser::GreaterEqualExprContext * /*ctx*/) override { }

  virtual void enterBitXorExpr(RiddleParser::BitXorExprContext * /*ctx*/) override { }
  virtual void exitBitXorExpr(RiddleParser::BitXorExprContext * /*ctx*/) override { }

  virtual void enterAddAssignExpr(RiddleParser::AddAssignExprContext * /*ctx*/) override { }
  virtual void exitAddAssignExpr(RiddleParser::AddAssignExprContext * /*ctx*/) override { }

  virtual void enterOrAssignExpr(RiddleParser::OrAssignExprContext * /*ctx*/) override { }
  virtual void exitOrAssignExpr(RiddleParser::OrAssignExprContext * /*ctx*/) override { }

  virtual void enterGreaterExpr(RiddleParser::GreaterExprContext * /*ctx*/) override { }
  virtual void exitGreaterExpr(RiddleParser::GreaterExprContext * /*ctx*/) override { }

  virtual void enterDivAssignExpr(RiddleParser::DivAssignExprContext * /*ctx*/) override { }
  virtual void exitDivAssignExpr(RiddleParser::DivAssignExprContext * /*ctx*/) override { }

  virtual void enterNotEqualExpr(RiddleParser::NotEqualExprContext * /*ctx*/) override { }
  virtual void exitNotEqualExpr(RiddleParser::NotEqualExprContext * /*ctx*/) override { }

  virtual void enterSelfSubLeftExpr(RiddleParser::SelfSubLeftExprContext * /*ctx*/) override { }
  virtual void exitSelfSubLeftExpr(RiddleParser::SelfSubLeftExprContext * /*ctx*/) override { }

  virtual void enterDivExpr(RiddleParser::DivExprContext * /*ctx*/) override { }
  virtual void exitDivExpr(RiddleParser::DivExprContext * /*ctx*/) override { }

  virtual void enterBitAndExpr(RiddleParser::BitAndExprContext * /*ctx*/) override { }
  virtual void exitBitAndExpr(RiddleParser::BitAndExprContext * /*ctx*/) override { }

  virtual void enterAssignExpr(RiddleParser::AssignExprContext * /*ctx*/) override { }
  virtual void exitAssignExpr(RiddleParser::AssignExprContext * /*ctx*/) override { }

  virtual void enterSelfAddRightExpr(RiddleParser::SelfAddRightExprContext * /*ctx*/) override { }
  virtual void exitSelfAddRightExpr(RiddleParser::SelfAddRightExprContext * /*ctx*/) override { }

  virtual void enterSubAssignExpr(RiddleParser::SubAssignExprContext * /*ctx*/) override { }
  virtual void exitSubAssignExpr(RiddleParser::SubAssignExprContext * /*ctx*/) override { }

  virtual void enterStarAssignExpr(RiddleParser::StarAssignExprContext * /*ctx*/) override { }
  virtual void exitStarAssignExpr(RiddleParser::StarAssignExprContext * /*ctx*/) override { }

  virtual void enterBracketExpr(RiddleParser::BracketExprContext * /*ctx*/) override { }
  virtual void exitBracketExpr(RiddleParser::BracketExprContext * /*ctx*/) override { }

  virtual void enterLessExpr(RiddleParser::LessExprContext * /*ctx*/) override { }
  virtual void exitLessExpr(RiddleParser::LessExprContext * /*ctx*/) override { }

  virtual void enterOrExpr(RiddleParser::OrExprContext * /*ctx*/) override { }
  virtual void exitOrExpr(RiddleParser::OrExprContext * /*ctx*/) override { }

  virtual void enterLeftLeftAssignExpr(RiddleParser::LeftLeftAssignExprContext * /*ctx*/) override { }
  virtual void exitLeftLeftAssignExpr(RiddleParser::LeftLeftAssignExprContext * /*ctx*/) override { }

  virtual void enterRightRightAssignExpr(RiddleParser::RightRightAssignExprContext * /*ctx*/) override { }
  virtual void exitRightRightAssignExpr(RiddleParser::RightRightAssignExprContext * /*ctx*/) override { }

  virtual void enterSelfAddLeftExpr(RiddleParser::SelfAddLeftExprContext * /*ctx*/) override { }
  virtual void exitSelfAddLeftExpr(RiddleParser::SelfAddLeftExprContext * /*ctx*/) override { }

  virtual void enterLessEqualExpr(RiddleParser::LessEqualExprContext * /*ctx*/) override { }
  virtual void exitLessEqualExpr(RiddleParser::LessEqualExprContext * /*ctx*/) override { }

  virtual void enterLeftLeftExpr(RiddleParser::LeftLeftExprContext * /*ctx*/) override { }
  virtual void exitLeftLeftExpr(RiddleParser::LeftLeftExprContext * /*ctx*/) override { }

  virtual void enterBitOrExpr(RiddleParser::BitOrExprContext * /*ctx*/) override { }
  virtual void exitBitOrExpr(RiddleParser::BitOrExprContext * /*ctx*/) override { }

  virtual void enterNotExpr(RiddleParser::NotExprContext * /*ctx*/) override { }
  virtual void exitNotExpr(RiddleParser::NotExprContext * /*ctx*/) override { }

  virtual void enterAddExpr(RiddleParser::AddExprContext * /*ctx*/) override { }
  virtual void exitAddExpr(RiddleParser::AddExprContext * /*ctx*/) override { }

  virtual void enterModAssignExpr(RiddleParser::ModAssignExprContext * /*ctx*/) override { }
  virtual void exitModAssignExpr(RiddleParser::ModAssignExprContext * /*ctx*/) override { }

  virtual void enterPositiveExpr(RiddleParser::PositiveExprContext * /*ctx*/) override { }
  virtual void exitPositiveExpr(RiddleParser::PositiveExprContext * /*ctx*/) override { }

  virtual void enterRightRightExpr(RiddleParser::RightRightExprContext * /*ctx*/) override { }
  virtual void exitRightRightExpr(RiddleParser::RightRightExprContext * /*ctx*/) override { }

  virtual void enterEqualExpr(RiddleParser::EqualExprContext * /*ctx*/) override { }
  virtual void exitEqualExpr(RiddleParser::EqualExprContext * /*ctx*/) override { }

  virtual void enterAndExpr(RiddleParser::AndExprContext * /*ctx*/) override { }
  virtual void exitAndExpr(RiddleParser::AndExprContext * /*ctx*/) override { }

  virtual void enterId(RiddleParser::IdContext * /*ctx*/) override { }
  virtual void exitId(RiddleParser::IdContext * /*ctx*/) override { }

  virtual void enterNumber(RiddleParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(RiddleParser::NumberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};
