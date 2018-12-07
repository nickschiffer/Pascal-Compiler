#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProg(GoGoParser::ProgContext *ctx)
{
    string program_name = "LetsGo";

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                              symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    // Create the assembly output file.
    j_file.open(program_name + ".j");
    if (j_file.fail())
    {
            cout << "***** Cannot open assembly file." << endl;
            exit(-99);
    }

    auto value = visit(ctx->main());
    int i = 0;
    while(ctx->func_definition(i) != nullptr) {
         visit(ctx->func_definition(i));
         i++;
    }
   
    //auto value = visitChildren(ctx);

    cout << "=== visitProg: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitMain(GoGoParser::MainContext *ctx)
{

    string program_name = "LetsGo";
    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the class constructor.
    j_file << endl;
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any Pass1Visitor::visitDeclaration(GoGoParser::DeclarationContext *ctx){
    cout << "=== Declaration: " + ctx->getText() << endl;

    //j_file << endl << "; " + ctx->getText() << endl << endl;

    variable_id_list.resize(0);

    string variable_name = ctx->ID()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id_list.push_back(variable_id);

    TypeSpec *type;
    string type_indicator;

    string type_name = ctx->TYPE()->toString();
    if (type_name == "int")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name == "double")
    {
        type = Predefined::real_type;
        type_indicator = "F";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }

    for (SymTabEntry *id : variable_id_list) {
        id->set_typespec(type);

        // Emit a field declaration.
        j_file << ".field private static "
               << id->get_name() << " " << type_indicator << endl; //table for one?
    }

    return visitChildren(ctx); //nullptr


}

antlrcpp::Any Pass1Visitor::visitDeclaration_implicit(GoGoParser::Declaration_implicitContext *ctx){

    variable_id_list.resize(0);

    string variable_name = ctx->ID()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id_list.push_back(variable_id);

        cout << "=== DeclarationExplicit: " + ctx->getText() << endl;

    TypeSpec *type;
    string type_indicator;
    string type_name;


    //hopefully this returns a nullptr (It does!)
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


    // string type_name = ctx->INT()->toString();//replaced above
    if (type_name == "int")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name == "double")
    {
        type = Predefined::real_type;
        type_indicator = "F";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }

    for (SymTabEntry *id : variable_id_list) {
        id->set_typespec(type);

        // Emit a field declaration.
        j_file << ".field private static "
               << id->get_name() << " " << type_indicator << endl; //table for one?
    }

    return visitChildren(ctx); //nullptr
}

antlrcpp::Any Pass1Visitor::visitFunc_definition(GoGoParser::Func_definitionContext *ctx){
    
    variable_id_list.resize(0);

    string function_name = ctx->ID()->toString();
    SymTabEntry *function_id = symtab_stack->enter_local(function_name);
    function_id->set_definition((Definition) DF_FUNCTION);
    variable_id_list.push_back(function_id);

    //////Code for Symbol Table Entry of function name
    cout << "=== FunctionDefinition: " + ctx->getText() << endl;

    TypeSpec *type;
    string type_name;

    type_name = ctx->TYPE()->toString();
    if (type_name == "int")
    {
        type = Predefined::integer_type;
    }
    else if (type_name == "double")
    {
        type = Predefined::real_type;
    }
    else
    {
        type = nullptr;
    }

    for (SymTabEntry *id : variable_id_list) {
        id->set_typespec(type);
    }

    //////Code for putting parameters in symbol table
       int i = 0;
    while(ctx->params()->param(i) != nullptr){
        variable_id_list.resize(0);

        string variable_name = ctx->params()->param(i)->ID()->toString();
        SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
        variable_id->set_definition((Definition) DF_VARIABLE);
        variable_id_list.push_back(variable_id);

        cout << "=== FunctionParameter: " + ctx->getText() << endl;

  
 
        type_name = ctx->params()->param(i)->TYPE()->toString();
        if (type_name == "int")
        {
            type = Predefined::integer_type;
        }
        else if (type_name == "double")
        {
            type = Predefined::real_type;
        }
        else
        {
            type = nullptr;
        }

        for (SymTabEntry *id : variable_id_list) {
            id->set_typespec(type);
        }
        i++;
    }

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitMulDiv(GoGoParser::MulDivContext *ctx) {
    cout << "=== visitMulDiv: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;    
}

antlrcpp::Any Pass1Visitor::visitAddSub(GoGoParser::AddSubContext *ctx) {
    cout << "=== visitAddSub: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitVarExpr(GoGoParser::VarExprContext *ctx) {
    cout << "=== visitVariableExpr: " + ctx->getText() << endl;

    string variable_name = ctx->variable()->ID()->toString();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);

    ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitNumberExpr(GoGoParser::NumberExprContext *ctx) {
    cout << "=== visitUnsignedNumberExpr: " + ctx->getText() << endl;

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitIntegerConst(GoGoParser::IntegerConstContext *ctx) {
    cout << "=== visitIntegerConst: " + ctx->getText() << endl;

    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitDoubleConst(GoGoParser::DoubleConstContext *ctx) {
    cout << "=== visitFloatConst: " + ctx->getText() << endl;

    ctx->type = Predefined::real_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitParens(GoGoParser::ParensContext *ctx) {
    cout << "=== visitParenExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitRelative(GoGoParser::RelativeContext *ctx) {
    cout << "=== visitRelative: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;    
}