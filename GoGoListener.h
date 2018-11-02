
// Generated from GoGo.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GoGoParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GoGoParser.
 */
class  GoGoListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(GoGoParser::ProgContext *ctx) = 0;
  virtual void exitProg(GoGoParser::ProgContext *ctx) = 0;

  virtual void enterStat(GoGoParser::StatContext *ctx) = 0;
  virtual void exitStat(GoGoParser::StatContext *ctx) = 0;

  virtual void enterExpr(GoGoParser::ExprContext *ctx) = 0;
  virtual void exitExpr(GoGoParser::ExprContext *ctx) = 0;

  virtual void enterDeclaration(GoGoParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(GoGoParser::DeclarationContext *ctx) = 0;

  virtual void enterDeclaration_implicit(GoGoParser::Declaration_implicitContext *ctx) = 0;
  virtual void exitDeclaration_implicit(GoGoParser::Declaration_implicitContext *ctx) = 0;

  virtual void enterFunc_definition(GoGoParser::Func_definitionContext *ctx) = 0;
  virtual void exitFunc_definition(GoGoParser::Func_definitionContext *ctx) = 0;

  virtual void enterFunc_call(GoGoParser::Func_callContext *ctx) = 0;
  virtual void exitFunc_call(GoGoParser::Func_callContext *ctx) = 0;

  virtual void enterFunc_call_params(GoGoParser::Func_call_paramsContext *ctx) = 0;
  virtual void exitFunc_call_params(GoGoParser::Func_call_paramsContext *ctx) = 0;

  virtual void enterParam(GoGoParser::ParamContext *ctx) = 0;
  virtual void exitParam(GoGoParser::ParamContext *ctx) = 0;

  virtual void enterParams(GoGoParser::ParamsContext *ctx) = 0;
  virtual void exitParams(GoGoParser::ParamsContext *ctx) = 0;

  virtual void enterCompound_stmt(GoGoParser::Compound_stmtContext *ctx) = 0;
  virtual void exitCompound_stmt(GoGoParser::Compound_stmtContext *ctx) = 0;

  virtual void enterIf_stmt(GoGoParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(GoGoParser::If_stmtContext *ctx) = 0;

  virtual void enterElse_stmt(GoGoParser::Else_stmtContext *ctx) = 0;
  virtual void exitElse_stmt(GoGoParser::Else_stmtContext *ctx) = 0;

  virtual void enterElse_if_stmt(GoGoParser::Else_if_stmtContext *ctx) = 0;
  virtual void exitElse_if_stmt(GoGoParser::Else_if_stmtContext *ctx) = 0;

  virtual void enterWhile_loop_stmt(GoGoParser::While_loop_stmtContext *ctx) = 0;
  virtual void exitWhile_loop_stmt(GoGoParser::While_loop_stmtContext *ctx) = 0;

  virtual void enterAssignment_stmt(GoGoParser::Assignment_stmtContext *ctx) = 0;
  virtual void exitAssignment_stmt(GoGoParser::Assignment_stmtContext *ctx) = 0;

  virtual void enterInc_dec(GoGoParser::Inc_decContext *ctx) = 0;
  virtual void exitInc_dec(GoGoParser::Inc_decContext *ctx) = 0;

  virtual void enterRtrn_stmt(GoGoParser::Rtrn_stmtContext *ctx) = 0;
  virtual void exitRtrn_stmt(GoGoParser::Rtrn_stmtContext *ctx) = 0;

  virtual void enterMul_div_op(GoGoParser::Mul_div_opContext *ctx) = 0;
  virtual void exitMul_div_op(GoGoParser::Mul_div_opContext *ctx) = 0;

  virtual void enterAdd_sub_op(GoGoParser::Add_sub_opContext *ctx) = 0;
  virtual void exitAdd_sub_op(GoGoParser::Add_sub_opContext *ctx) = 0;

  virtual void enterRel_op(GoGoParser::Rel_opContext *ctx) = 0;
  virtual void exitRel_op(GoGoParser::Rel_opContext *ctx) = 0;

  virtual void enterInc_dec_op(GoGoParser::Inc_dec_opContext *ctx) = 0;
  virtual void exitInc_dec_op(GoGoParser::Inc_dec_opContext *ctx) = 0;


};

