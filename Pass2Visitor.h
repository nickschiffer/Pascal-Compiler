#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "GoGoBaseVisitor.h"
#include "antlr4-runtime.h"
#include "GoGoVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public GoGoBaseVisitor
{
private:
	string program_name;
	ostream& j_file;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();



    antlrcpp::Any visitProg(GoGoParser::ProgContext *ctx) override;
    antlrcpp::Any visitStat(GoGoParser::StatContext *ctx) override;
    antlrcpp::Any visitDeclaration(GoGoParser::DeclarationContext *ctx) override;
    antlrcpp::Any visitDeclaration_implicit(GoGoParser::Declaration_implicitContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(GoGoParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitAddSub(GoGoParser::AddSubContext *ctx) override;
    antlrcpp::Any visitMulDiv(GoGoParser::MulDivContext *ctx) override;
    antlrcpp::Any visitVarExpr(GoGoParser::VarExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(GoGoParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitDoubleConst(GoGoParser::DoubleConstContext *ctx) override;
    //antlrcpp::Any visitRelative(GoGoParser::RelativeContext *ctx) override;
};

#endif /* PASS2VISITOR_H_ */
