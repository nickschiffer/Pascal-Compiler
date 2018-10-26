
// Generated from GoGo.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GoGoListener.h"


/**
 * This class provides an empty implementation of GoGoListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GoGoBaseListener : public GoGoListener {
public:

  virtual void enterProg(GoGoParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(GoGoParser::ProgContext * /*ctx*/) override { }

  virtual void enterStat(GoGoParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(GoGoParser::StatContext * /*ctx*/) override { }

  virtual void enterDeclaration(GoGoParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(GoGoParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterFunc_defintion(GoGoParser::Func_defintionContext * /*ctx*/) override { }
  virtual void exitFunc_defintion(GoGoParser::Func_defintionContext * /*ctx*/) override { }

  virtual void enterFunc_call(GoGoParser::Func_callContext * /*ctx*/) override { }
  virtual void exitFunc_call(GoGoParser::Func_callContext * /*ctx*/) override { }

  virtual void enterFunc_call_params(GoGoParser::Func_call_paramsContext * /*ctx*/) override { }
  virtual void exitFunc_call_params(GoGoParser::Func_call_paramsContext * /*ctx*/) override { }

  virtual void enterParam(GoGoParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(GoGoParser::ParamContext * /*ctx*/) override { }

  virtual void enterParams(GoGoParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(GoGoParser::ParamsContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(GoGoParser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(GoGoParser::Compound_stmtContext * /*ctx*/) override { }

  virtual void enterExpr(GoGoParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(GoGoParser::ExprContext * /*ctx*/) override { }

  virtual void enterIf_stmt(GoGoParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(GoGoParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterElse_stmt(GoGoParser::Else_stmtContext * /*ctx*/) override { }
  virtual void exitElse_stmt(GoGoParser::Else_stmtContext * /*ctx*/) override { }

  virtual void enterWhile_loop_stmt(GoGoParser::While_loop_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_loop_stmt(GoGoParser::While_loop_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(GoGoParser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(GoGoParser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt(GoGoParser::Assignment_stmtContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt(GoGoParser::Assignment_stmtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

