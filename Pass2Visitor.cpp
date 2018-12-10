#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProg(GoGoParser::ProgContext *ctx)
{
    auto value = visitChildren(ctx);
    return value;
}

antlrcpp::Any Pass2Visitor::visitMain(GoGoParser::MainContext *ctx)
{
    isFunction = false;
    program_name = "LetsGo";

// Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;
    
    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 32" << endl;
    j_file << ".limit stack 32" << endl;
    j_file << ".end method" << endl;
    //j_file.close();
    return value;
}

antlrcpp::Any Pass2Visitor::visitStat(GoGoParser::StatContext *ctx)
{
    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitDeclaration(GoGoParser::DeclarationContext *ctx)
{
    string type_name = ctx->TYPE()->toString();
    string type_indicator;
    
    //Is function?
    if (isFunction) {
        if (type_name == "int") {
            j_file << "\tldc\t" << ctx->INT()->toString() << endl;
        }
        else if (type_name == "double") {
            j_file << "\tldc\t" << ctx->DOUBLE()->toString() << endl;
        }
        else {
            j_file << "\tldc\t" << "?" << endl;
        }
        int index;
        for(int i = 0; i < locals.size(); i++) {
            if(locals.at(i) == ctx->ID()->toString())
                index = i;
        }
        if (type_name == "int") {
            j_file << "\tistore_" << index << endl;
        }
        else if (type_name == "double") {
            j_file << "\tfstore_" << index << endl;
        }
        else {
            j_file << "\t????" << "?" << endl;
        }

    } else {
    
    //Not a function
    if (type_name == "int")
    {
        type_indicator = "I";
        j_file << "\tldc\t" << ctx->INT()->toString() << endl;
    }
    else if (type_name == "double")
    {
        type_indicator = "F";
        j_file << "\tldc\t" << ctx->DOUBLE()->toString() << endl;
    }
    else
    {
        type_indicator = "?";
    }
    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->ID()->toString()
           << " " << type_indicator << endl;
    }
    return visitChildren(ctx);    
}

antlrcpp::Any Pass2Visitor::visitDeclaration_implicit(GoGoParser::Declaration_implicitContext *ctx)
{

    string type_name;
    string type_indicator;

    auto typenode = ctx->INT();
    if (typenode == nullptr){
        typenode = ctx->DOUBLE();
        if (typenode == nullptr){
            type_name = "Jank";
        }
        else {
            type_name = "double";
        }

    }
    else{
        type_name = "int";
    }

    //Is function?
    if (isFunction) {
        if (type_name == "int") {
            j_file << "\tldc\t" << ctx->INT()->toString() << endl;
        }
        else if (type_name == "double") {
            j_file << "\tldc\t" << ctx->DOUBLE()->toString() << endl;
        }
        else {
            j_file << "\tldc\t" << "?" << endl;
        }
        int index;
        for(int i = 0; i < locals.size(); i++) {
            if(locals.at(i) == ctx->ID()->toString())
                index = i;
        }
        if (type_name == "int") {
            j_file << "\tistore_" << index << endl;
        }
        else if (type_name == "double") {
            j_file << "\tfstore_" << index << endl;
        }
        else {
            j_file << "\t????" << "?" << endl;
        }

    } else {

    //Is not function    


    if (type_name == "int")
    {
        type_indicator = "I";
        j_file << "\tldc\t" << ctx->INT()->toString() << endl;
    }
    else if (type_name == "double")
    {
        type_indicator = "F";
        j_file << "\tldc\t" << ctx->DOUBLE()->toString() << endl;
    }
    else
    {
        type_indicator = "?";
    }
    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->ID()->toString()
           << " " << type_indicator << endl;
    }

    return visitChildren(ctx);    
}

antlrcpp::Any Pass2Visitor::visitFunc_definition(GoGoParser::Func_definitionContext *ctx)
{
    isFunction = true;
    currentFunc = ctx->ID()->toString();
    locals.clear();

    program_name = "LetsGo";
    j_file << endl << ".method private static " << ctx->ID()->toString() << "(";

    //Generate method header line
    int i = 0;
    while(ctx->params()->param(i) != nullptr) {
        if(ctx->params()->param(i)->TYPE()->toString() == "int") {
            j_file << "I";
        } else {
            j_file << "F";
        }  
        locals.push_back(ctx->params()->param(i)->ID()->toString());      
        i++;
    }

    j_file << ")";
    
    if(ctx->TYPE()->toString() == "int") {
        j_file << "I" << endl;
    } else if(ctx->TYPE()->toString() == "double") {
        j_file << "F" << endl;
    } else {
        j_file << "V" << endl;
    }
    //Add parameter variables
    i = 0;
    while(ctx->params()->param(i) != nullptr) {
        if(ctx->params()->param(i)->TYPE()->toString() == "int") {
            j_file << ".var " << i << " is " << ctx->params()->param(i)->ID()->toString() << " I " << endl;
        } else {
            j_file << ".var " << i << " is " << ctx->params()->param(i)->ID()->toString() << " F " << endl;
        }        
        i++;
    }

    //Add local variables
    string type_name;
    int j = 0;
    while(ctx->compound_stmt()->stat(j) != nullptr){
        if(ctx->compound_stmt()->stat(j)->declaration() != nullptr){
            if(ctx->compound_stmt()->stat(j)->declaration()->TYPE()->toString() == "int") {
                j_file << ".var " << locals.size() << " is " << ctx->compound_stmt()->stat(j)->declaration()->ID()->toString() << " I " << endl;
            } else {
                j_file << ".var " << locals.size() << " is " << ctx->compound_stmt()->stat(j)->declaration()->ID()->toString() << " F " << endl;
            }
            locals.push_back(ctx->compound_stmt()->stat(j)->declaration()->ID()->toString());
        } else if(ctx->compound_stmt()->stat(j)->declaration_implicit() != nullptr) {
            auto typenode = ctx->compound_stmt()->stat(j)->declaration_implicit()->INT();
                if (typenode == nullptr){
                    typenode = ctx->compound_stmt()->stat(j)->declaration_implicit()->DOUBLE();
                    if (typenode == nullptr){
                        type_name = "Jank";
                    }
                    else {
                        type_name = "double";
                    }
                }
                else{
                    type_name = "int";
                }

                if (type_name == "int")
                {
                    j_file << ".var " << locals.size() << " is " << ctx->compound_stmt()->stat(j)->declaration_implicit()->ID()->toString() << " I " << endl;
                }
                else {
                    j_file << ".var " << locals.size() << " is " << ctx->compound_stmt()->stat(j)->declaration_implicit()->ID()->toString() << " F " << endl;
                }

            locals.push_back(ctx->compound_stmt()->stat(j)->declaration_implicit()->ID()->toString());
        }
        j++;
    }

    auto value = visitChildren(ctx->compound_stmt());

    if(ctx->TYPE()->toString() == "void")
        j_file << endl << "\treturn" << endl;
    

    //print end of method
    j_file << endl << ".limit stack 16" << endl;
    j_file << ".limit locals " << locals.size() << endl;
    j_file << ".end method" << endl;    
    
    return value;
}

antlrcpp::Any Pass2Visitor::visitRtrn_stmt(GoGoParser::Rtrn_stmtContext *ctx)
{
    auto value = visit(ctx->expr());

    string type_indicator =
                (ctx->expr()->type == Predefined::integer_type) ? "I"
            :   (ctx->expr()->type == Predefined::real_type)    ? "F"
            :                                                   "?";

        if(type_indicator == "I"){
            j_file << "\tireturn" << endl;
        } else if(type_indicator == "F"){
            j_file << "\tfreturn" << endl;
        } else {
            j_file << "\t?????" << endl;
        }

    return value;
}

antlrcpp::Any Pass2Visitor::visitAssignment_stmt(GoGoParser::Assignment_stmtContext *ctx)
{
    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";


    //Is function?
    if (isFunction) {
        int index = -1;
        for(int i = 0; i < locals.size(); i++) {
            if(locals.at(i) == ctx->ID()->toString())
                index = i;
        }
        if(index != -1){
            if(type_indicator == "I"){
                j_file << "\tistore_" << index << endl;
            } else {
                j_file << "\tfstore_" << index << endl;
            }
        } else {
            j_file << "\tputstatic\t" << program_name
                   << "/" << ctx->ID()->toString()
                   << " " << type_indicator << endl;
        }
            
    } else {


    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->ID()->toString()
           << " " << type_indicator << endl;
    }

    return value;
}

antlrcpp::Any Pass2Visitor::visitAddSub(GoGoParser::AddSubContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->add_sub_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitMulDiv(GoGoParser::MulDivContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->mul_div_op()->getText();
    string opcode;

    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idpv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitVarExpr(GoGoParser::VarExprContext *ctx)
{
    string variable_name = ctx->variable()->ID()->toString();
    TypeSpec *type = ctx->type;

    string type_indicator = (type == Predefined::integer_type) ? "I"
                          : (type == Predefined::real_type)    ? "F"
                          :                                      "?";

    //Is function?
    if (isFunction) {
        int index = -1;
        for(int i = 0; i < locals.size(); i++) {
            if(locals.at(i) == ctx->variable()->ID()->toString())
                index = i;
        }
        if(index != -1){
            if(type_indicator == "I"){
                j_file << "\tiload_" << index << endl;
            } else {
                j_file << "\tfload_" << index << endl;
            }
        } else {
            j_file << "\tgetstatic\t" << program_name
                   << "/" << ctx->variable()->ID()->toString()
                   << " " << type_indicator << endl;
        }
            
    } else {


    // Emit a field get instruction.
    j_file << "\tgetstatic\t" << program_name
           << "/" << variable_name << " " << type_indicator << endl;
    }
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitIntegerConst(GoGoParser::IntegerConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitDoubleConst(GoGoParser::DoubleConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitRelative(GoGoParser::RelativeContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->rel_op()->getText();
    string opcode;

    if(integer_mode) {
        if(op == "==")
            j_file << "\tif_icmpeq L0" << to_string(labelCounter) << endl;
        else if (op == "!=")
            j_file << "\tif_icmpne L0" << to_string(labelCounter) << endl;
        else if (op == "<")
            j_file << "\tif_icmplt L0" << to_string(labelCounter) << endl;
        else if (op == "<=")
            j_file << "\tif_icmple L0" << to_string(labelCounter) << endl;
        else if (op == ">")
            j_file << "\tif_icmpgt L0" << to_string(labelCounter) << endl;
        else if (op == ">=")
            j_file << "\tif_icmpge L0" << to_string(labelCounter) << endl;
        
        j_file << "\ticonst_0" << endl;
        j_file << "\tgoto L0" << to_string(labelCounter + 1) << endl;
        j_file << "L0" << to_string(labelCounter) << ":" << endl;
        j_file << "\ticonst_1" << endl;
        j_file << "L0" << to_string(labelCounter + 1) << ":" << endl;
        labelCounter += 2;  
    }

        if(real_mode) {
            j_file << "\tfcmpg" << endl;

            if(op == "==") 
                j_file << "\tifeq L0" << to_string(labelCounter) << endl;
            if(op == "!=")
                j_file << "\tifne L0" << to_string(labelCounter) << endl;
            if(op == "<")
                j_file << "\tiflt L0" << to_string(labelCounter) << endl;
            if(op == "<=")
                j_file << "\tifle L0" << to_string(labelCounter) << endl;
            if(op == ">")
                j_file << "\tifgt L0" << to_string(labelCounter) << endl;
            if(op == ">=")
                j_file << "\tifge L0" << to_string(labelCounter) << endl;

        j_file << "\ticonst_0" << endl;
        j_file << "\tgoto L0" << to_string(labelCounter + 1) << endl;
        j_file << "L0" << to_string(labelCounter) << ":" << endl;
        j_file << "\ticonst_1" << endl;
        j_file << "L0" << to_string(labelCounter + 1) << ":" << endl;
        labelCounter += 2;
        }

    return value;
}

antlrcpp::Any Pass2Visitor::visitIf_stmt(GoGoParser::If_stmtContext *ctx)
{

    auto value = visit(ctx->expr());
    
    endCounter = labelCounter; //For end-of-statement label
    labelCounter++;

    if (ctx->else_stmt() != nullptr) {
        nextCounter = labelCounter; //For next else-if statement
        labelCounter++;  
        j_file << "\tifeq L0" << nextCounter << endl;
    }  else {
        j_file << "\tifeq L0" << endCounter << endl;
    }

    visit(ctx->compound_stmt());   

    if (ctx->else_if_stmt(0) != nullptr) {
        j_file << "\tgoto L0" << endCounter << endl;
        j_file << "L0" << nextCounter << ":" << endl;
        nextCounter++;
        int i = 0;
        while(ctx->else_if_stmt(i) != nullptr){
            visit(ctx->else_if_stmt(i));
            i++;
        }
    }
    
    if (ctx->else_stmt() != nullptr){
        if(ctx->else_if_stmt(0) == nullptr){
            j_file << "\tgoto L0" << endCounter << endl;
            j_file << "L0" << nextCounter << ":" << endl;
        }
        visit(ctx->else_stmt());
    }

    j_file << "L0" << endCounter << ":" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitElse_if_stmt(GoGoParser::Else_if_stmtContext *ctx)
{
    auto value = visit(ctx->expr());
    
    j_file << "\tifeq L0" << labelCounter << endl;
    nextCounter = labelCounter;
    labelCounter++;

    visit(ctx->compound_stmt());
    j_file << "\tgoto L0" << endCounter << endl;
    j_file << "L0" << nextCounter << ":" << endl;
   
    return value;
}

antlrcpp::Any Pass2Visitor::visitWhile_loop_stmt(GoGoParser::While_loop_stmtContext *ctx)
{
    int labelCounterTop, labelCounterEnd;
    j_file << "L0" << labelCounter << ":" << endl;
    labelCounterTop = labelCounter;
    labelCounter++;
    auto value = visit(ctx->expr());    
    j_file << "\tifeq " << "L0" << labelCounter << endl;
    labelCounterEnd = labelCounter;
    labelCounter++;
    visit(ctx->compound_stmt());
    j_file << "\tgoto L0" << labelCounterTop << endl;
    j_file << "L0" << labelCounterEnd << ":" << endl;

    return value;

}
antlrcpp::Any Pass2Visitor::visitPrintf_stmt(GoGoParser::Printf_stmtContext *ctx){
    string format_string = ctx->STRING()->toString();
    
    vector<TypeSpec*> types;
    vector<string> children_strings;
    int i = 0;
    auto somwthing = ctx->expr(0);
    auto something = ctx->children;
    auto somwthing_else = something.size();

    int expr_count = 0;


    for (auto child : something){

        auto mystery = child->children;
        if (!mystery.empty()){
            types.push_back(ctx->expr(expr_count++)->type);
        }
    }
    // TypeSpec* typel = ctx->expr(0)->type;
    // TypeSpec* typem = ctx->expr(0)->type;
    // TypeSpec* typen = ctx->expr(1)->type;
    // TypeSpec* typeo = ctx->expr(2)->type;
    // // ctx->expr(i)->type;
    // while((typel = ctx->expr(i++)->type) != nullptr){ 
    //     types.push_back(typel);
    // }

    int numIDs = types.size();

    j_file << "\t" <<"getstatic" << "\t" << "java/lang/System/out Ljava/io/PrintStream;" << endl;
    j_file << "\t" <<"ldc "<< "\t" << format_string << endl;
    j_file << "\t" <<"iconst_" << numIDs << endl;
    j_file << "\t" <<"anewarray" << "\t" << "java/lang/Object" << endl;
    

    for (int i = 0; i < numIDs; i++){
        j_file << "\t" <<"dup" << endl;
        j_file << "\t" <<"iconst_" << i << endl;
        visit(ctx->expr(i));
        j_file << "\t" <<"invokestatic" << "\t" << "java/lang/";
        if (types[i] == Predefined::integer_type){
            j_file << "Integer.valueOf(I)Ljava/lang/Integer;"<< endl;
        }
        if (types[i] == Predefined::real_type){
            j_file << "Float.valueOf(F)Ljava/lang/Float;"<<endl;
        }
        j_file << "\t" <<"aastore" << endl;
        
    } 

    j_file << "\t" <<"invokevirtual" << "\t" << "java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" << endl;
    j_file << "\t" <<"pop" << endl;


    return nullptr;
}
antlrcpp::Any Pass2Visitor::visitPrint_stmt(GoGoParser::Print_stmtContext *ctx){

}

antlrcpp::Any Pass2Visitor::visitFunc_call(GoGoParser::Func_callContext *ctx){
    auto value = visitChildren(ctx);
    j_file << "\tinvokestatic " << program_name << "/" << ctx->ID()->toString() << "(";
    
    int i = 0;
    while(ctx->func_call_params()->expr(i) != nullptr) {
        if(ctx->func_call_params()->expr(i)->type == Predefined::integer_type) {
            j_file << "I";
        } else if(ctx->func_call_params()->expr(i)->type == Predefined::real_type) {
            j_file << "F";
        }  else {
            j_file << "?";
        }    
        i++;
    }

    j_file << ")";

    if(symtabstack->lookup_local(ctx->ID()->toString())->get_typespec() == Predefined::integer_type) {
        j_file << "I";
    } else if(symtabstack->lookup_local(ctx->ID()->toString())->get_typespec() == Predefined::real_type) {
        j_file << "F";
    } else if(symtabstack->lookup_local(ctx->ID()->toString())->get_typespec() == Predefined::undefined_type) {
        j_file << "V";
    }  else {
        j_file << "?";
    }

    j_file << endl;

    return value;
}
