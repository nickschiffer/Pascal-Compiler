
// Generated from GoGo.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GoGoVisitor.h"


/**
 * This class provides an empty implementation of GoGoVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GoGoBaseVisitor : public GoGoVisitor {
public:

  virtual antlrcpp::Any visitProg(GoGoParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(GoGoParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarExpr(GoGoParser::VarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParens(GoGoParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDiv(GoGoParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSub(GoGoParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberExpr(GoGoParser::NumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelative(GoGoParser::RelativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(GoGoParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerConst(GoGoParser::IntegerConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoubleConst(GoGoParser::DoubleConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(GoGoParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_implicit(GoGoParser::Declaration_implicitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_definition(GoGoParser::Func_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call(GoGoParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call_params(GoGoParser::Func_call_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(GoGoParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParams(GoGoParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_stmt(GoGoParser::Compound_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(GoGoParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_stmt(GoGoParser::Else_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_if_stmt(GoGoParser::Else_if_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_loop_stmt(GoGoParser::While_loop_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(GoGoParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInc_dec(GoGoParser::Inc_decContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRtrn_stmt(GoGoParser::Rtrn_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_stmt(GoGoParser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintf_stmt(GoGoParser::Printf_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(GoGoParser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(GoGoParser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_op(GoGoParser::Rel_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInc_dec_op(GoGoParser::Inc_dec_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

