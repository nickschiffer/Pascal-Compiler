
// Generated from GoGo.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GoGoParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GoGoParser.
 */
class  GoGoVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GoGoParser.
   */
    virtual antlrcpp::Any visitProg(GoGoParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitIncDec(GoGoParser::IncDecContext *context) = 0;

    virtual antlrcpp::Any visitExpression(GoGoParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssign(GoGoParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitDeclare(GoGoParser::DeclareContext *context) = 0;

    virtual antlrcpp::Any visitDeclareImp(GoGoParser::DeclareImpContext *context) = 0;

    virtual antlrcpp::Any visitIf(GoGoParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitFuncDef(GoGoParser::FuncDefContext *context) = 0;

    virtual antlrcpp::Any visitWhileLoop(GoGoParser::WhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitFuncCall(GoGoParser::FuncCallContext *context) = 0;

    virtual antlrcpp::Any visitReturn(GoGoParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitParens(GoGoParser::ParensContext *context) = 0;

    virtual antlrcpp::Any visitMulDiv(GoGoParser::MulDivContext *context) = 0;

    virtual antlrcpp::Any visitAddSub(GoGoParser::AddSubContext *context) = 0;

    virtual antlrcpp::Any visitDouble(GoGoParser::DoubleContext *context) = 0;

    virtual antlrcpp::Any visitId(GoGoParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitInt(GoGoParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitRelative(GoGoParser::RelativeContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(GoGoParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_implicit(GoGoParser::Declaration_implicitContext *context) = 0;

    virtual antlrcpp::Any visitFunc_definition(GoGoParser::Func_definitionContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call(GoGoParser::Func_callContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call_params(GoGoParser::Func_call_paramsContext *context) = 0;

    virtual antlrcpp::Any visitParam(GoGoParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitParams(GoGoParser::ParamsContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stmt(GoGoParser::Compound_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(GoGoParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitElse_stmt(GoGoParser::Else_stmtContext *context) = 0;

    virtual antlrcpp::Any visitElse_if_stmt(GoGoParser::Else_if_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhile_loop_stmt(GoGoParser::While_loop_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(GoGoParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitInc_dec(GoGoParser::Inc_decContext *context) = 0;

    virtual antlrcpp::Any visitRtrn_stmt(GoGoParser::Rtrn_stmtContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(GoGoParser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(GoGoParser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(GoGoParser::Rel_opContext *context) = 0;

    virtual antlrcpp::Any visitInc_dec_op(GoGoParser::Inc_dec_opContext *context) = 0;


};

