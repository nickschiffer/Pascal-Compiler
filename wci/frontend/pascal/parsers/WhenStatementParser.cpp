/**
 * <h1>CaseStatementParser</h1>
 *
 * <p>Parse a Pascal WHEN statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <set>
#include "WhenStatementParser.h"
#include "StatementParser.h"
#include "AssignmentStatementParser.h"
#include "ExpressionParser.h"
#include "../PascalParserTD.h"
#include "../PascalToken.h"
#include "../PascalError.h"
#include "../../Token.h"
#include "../../../intermediate/ICodeNode.h"
#include "../../../intermediate/ICodeFactory.h"
#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

set<PascalTokenType> WhenStatementParser::RIGHT_ARROW_SET;
//set<PascalTokenType> WhenStatementParser::COMMA_SET;

bool WhenStatementParser::INITIALIZED = false;

void WhenStatementParser::initialize()
{
    if (INITIALIZED) return;

    RIGHT_ARROW_SET = STMT_START_SET;
    RIGHT_ARROW_SET.insert(PT_RIGHT_ARROW);


    set<PascalTokenType>::iterator it;
    for (it  = StatementParser::STMT_START_SET.begin();
         it != StatementParser::STMT_START_SET.end();
         it++)
    {
        RIGHT_ARROW_SET.insert(*it);
    }
    for (it  = StatementParser::STMT_FOLLOW_SET.begin();
         it != StatementParser::STMT_FOLLOW_SET.end();
         it++)
    {
        RIGHT_ARROW_SET.insert(*it);
    }

    INITIALIZED = true;
}

WhenStatementParser::WhenStatementParser(PascalParserTD *parent)
    : StatementParser(parent)
{
    initialize();
}

ICodeNode *WhenStatementParser::parse_statement(Token *token) throw (string)
{
    token = next_token(token);  // consume the WHEN
    ExpressionParser expression_parser(this);
    StatementParser statement_parser(this);
    // Create a WHEN node.
    ICodeNode *when_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_WHEN);
    while ((token != nullptr) && (token->get_type() != (TokenType) PT_OTHERWISE)){
        // Parse the WHEN expression.
        // The WHEN node adopts the expression subtree as its first child.
        when_node->add_child(expression_parser.parse_statement(token));

        if (token->get_type() == (TokenType) PT_RIGHT_ARROW){
            token = next_token(token); //Consume SEMICOLON
        }
        else {
            error_handler.flag(token, MISSING_RIGHT_ARROW, this);
        }

        when_node->add_child(statement_parser.parse_statement(token));
        token = synchronize(STMT_FOLLOW_SET);
        if (token->get_type() == (TokenType) PT_SEMICOLON){
            token = next_token(token); //Consume SEMICOLON
        }
        else {
            error_handler.flag(token, MISSING_SEMICOLON, this);
        }
    }
    //Consume OTHERWISE
    if (token->get_type() == (TokenType) PT_OTHERWISE){
        token = next_token(token);
    }
    else {
        error_handler.flag(token, MISSING_OTHERWISE, this);
    }


    //Check for missing RIGHT_ARROW.
    token = synchronize(RIGHT_ARROW_SET);
    if (token->get_type() == (TokenType) PT_RIGHT_ARROW)
    {
        token = next_token(token);  // consume the RIGHT_ARROW
    }
    else {
        error_handler.flag(token, MISSING_RIGHT_ARROW, this);
    }

    //when_node->add_child(expression_parser.parse_statement(token));
    when_node->add_child(statement_parser.parse_statement(token));

    if (token->get_type() == (TokenType) PT_END){
        token = next_token(token);
    }
    else {
        error_handler.flag(token, MISSING_END, this);
    }

    //token = synchronize(STMT_FOLLOW_SET);
    // if (token->get_type() == (TokenType) PT_SEMICOLON){
    //     token = next_token(token); //Consume Semicolon
    // }
    // else{
    //     error_handler.flag(token, MISSING_SEMICOLON, this);
    // }


    return when_node;
}

ICodeNode *WhenStatementParser::parse_branch(Token *token)
    throw (string)
{
    // Create an WHEN_BRANCH node.
    // The WHEN_BRANCH node adopts the EXPRESSION and STATEMENT node as its
    // first child.
    ExpressionParser expression_parser(this);
    StatementParser statement_parser(this);
    ICodeNode *branch_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_WHEN_BRANCH);
    branch_node->add_child(expression_parser.parse_statement(token));

    // Synchronize at the RIGHT_ARROW.
    token = synchronize(RIGHT_ARROW_SET);
    if (token->get_type() == (TokenType) PT_RIGHT_ARROW)
    {
        token = next_token(token);  // consume the RIGHT_ARROW
    }
    else {
        error_handler.flag(token, MISSING_RIGHT_ARROW, this);
    }

    branch_node->add_child(statement_parser.parse_statement(token));
    return branch_node;
}

}}}}  // namespace wci::frontend::pascal::parsers
