#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "GoGoBaseVisitor.h"
#include "antlr4-runtime.h"
#include "GoGoVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public GoGoBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;
    bool isFunction;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();
    SymTabStack* get_symtab_stack() {return symtab_stack;}
    //to keep
    antlrcpp::Any visitProg(GoGoParser::ProgContext *ctx) override;
    antlrcpp::Any visitMain(GoGoParser::MainContext *ctx) override;
    antlrcpp::Any visitDeclaration(GoGoParser::DeclarationContext *ctx) override;        
    antlrcpp::Any visitDeclaration_implicit(GoGoParser::Declaration_implicitContext *ctx) override;
    antlrcpp::Any visitMulDiv(GoGoParser::MulDivContext *ctx) override;
    antlrcpp::Any visitAddSub(GoGoParser::AddSubContext *ctx) override;
    antlrcpp::Any visitVarExpr(GoGoParser::VarExprContext *ctx) override;
    antlrcpp::Any visitNumberExpr(GoGoParser::NumberExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(GoGoParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitDoubleConst(GoGoParser::DoubleConstContext *ctx) override;
    antlrcpp::Any visitParens(GoGoParser::ParensContext *ctx) override;
    antlrcpp::Any visitRelative(GoGoParser::RelativeContext *ctx) override;
    antlrcpp::Any visitFunc_definition(GoGoParser::Func_definitionContext *ctx) override;

    //extras
    // antlrcpp::Any visitStat(GoGoParser::StatContext *ctx) override;
    // antlrcpp::Any visitFunc_call(GoGoParser::Func_callContext *ctx) override;
    // antlrcpp::Any visitFunc_call_params(GoGoParser::Func_call_paramsContext *ctx) override;
    // antlrcpp::Any visitParam(GoGoParser::ParamContext *ctx) override;
    // antlrcpp::Any visitParams(GoGoParser::ParamsContext *ctx) override;
    // antlrcpp::Any visitCompound_stmt(GoGoParser::Compound_stmtContext *ctx) override;
    // antlrcpp::Any visitIf_stmt(GoGoParser::If_stmtContext *ctx) override;
    // antlrcpp::Any visitElse_stmt(GoGoParser::Else_stmtContext *ctx) override;
    // antlrcpp::Any visitElse_if_stmt(GoGoParser::Else_if_stmtContext *ctx) override;
    // antlrcpp::Any visitWhile_loop_stmt(GoGoParser::While_loop_stmtContext *ctx) override;
    // antlrcpp::Any visitAssignment_stmt(GoGoParser::Assignment_stmtContext *ctx) override;
    // antlrcpp::Any visitInc_dec(GoGoParser::Inc_decContext *ctx) override;
    // antlrcpp::Any visitRtrn_stmt(GoGoParser::Rtrn_stmtContext *ctx) override;
    // antlrcpp::Any visitMul_div_op(GoGoParser::Mul_div_opContext *ctx) override;
    // antlrcpp::Any visitAdd_sub_op(GoGoParser::Add_sub_opContext *ctx) override;
    // antlrcpp::Any visitRel_op(GoGoParser::Rel_opContext *ctx) override;
    // antlrcpp::Any visitInc_dec_op(GoGoParser::Inc_dec_opContext *ctx) override;



    //from PCL2, for reference
    // antlrcpp::Any visitDecl(GoGoParser::DeclContext *ctx) override;
    // antlrcpp::Any visitVarList(GoGoParser::VarListContext *ctx) override;
    // antlrcpp::Any visitVarId(GoGoParser::VarIdContext *ctx) override;
    // antlrcpp::Any visitTypeId(GoGoParser::TypeIdContext *ctx) override;
    // antlrcpp::Any visitAddSubExpr(GoGoParser::AddSubExprContext *ctx) override;
    // antlrcpp::Any visitMulDivExpr(GoGoParser::MulDivExprContext *ctx) override;
    // antlrcpp::Any visitVariableExpr(GoGoParser::VariableExprContext *ctx) override;
    // antlrcpp::Any visitSignedNumberExpr(GoGoParser::SignedNumberExprContext *ctx) override;
    // antlrcpp::Any visitSignedNumber(GoGoParser::SignedNumberContext *ctx) override;
    // antlrcpp::Any visitUnsignedNumberExpr(GoGoParser::UnsignedNumberExprContext *ctx) override;
    // antlrcpp::Any visitIntegerConst(GoGoParser::IntegerConstContext *ctx) override;
    // antlrcpp::Any visitFloatConst(GoGoParser::FloatConstContext *ctx) override;
    // antlrcpp::Any visitParenExpr(GoGoParser::ParenExprContext *ctx) override;
};









#endif /* PASS1VISITOR_H_ */