/**
 * <h1>CPlusPlusToken</h1>
 *
 * <p>Base class for CPlusPlus token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <vector>
#include <map>
#include "CPlusPlusToken.h"

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;

map<string, CPlusPlusTokenType> CPlusPlusToken::RESERVED_WORDS;
map<string, CPlusPlusTokenType> CPlusPlusToken::SPECIAL_SYMBOLS;
map<CPlusPlusTokenType, string> CPlusPlusToken::SPECIAL_SYMBOL_NAMES;

bool CPlusPlusToken::INITIALIZED = false;

void CPlusPlusToken::initialize()
{
    if (INITIALIZED) return;

    vector<string> rw_strings =
    {
    		"auto", "double", "int", "struct", "break", "else", "long", "switch",
    		    		 "case", "enum", "namespace", "template", "char", "extern", "operator", "this",
    		    		 "class", "float", "protected", "throw", "const", "for", "public", "union",
    		    		 "continue", "goto", "return", "void", "do", "if", "static",
    		    		 "while", "var", "while"
    };

    vector<CPlusPlusTokenType> rw_keys =
    {
    		CPlusPlusTokenType::AUTO,
    		    		        CPlusPlusTokenType::DOUBLE,
    		    		        CPlusPlusTokenType::INT,
    		    		        CPlusPlusTokenType::STRUCT,
    		    		        CPlusPlusTokenType::BREAK,
    		    		        CPlusPlusTokenType::ELSE,
    		    		        CPlusPlusTokenType::LONG,
    		    		        CPlusPlusTokenType::SWITCH,

    		    		        CPlusPlusTokenType::CASE,
    		    		        CPlusPlusTokenType::ENUM,
    		    		        CPlusPlusTokenType::NAMESPACE,
    		    		        CPlusPlusTokenType::TEMPLATE,
    		    		        CPlusPlusTokenType::CHAR,
    		    		        CPlusPlusTokenType::EXTERN,
    		    		        CPlusPlusTokenType::OPERATOR,
    		    		        CPlusPlusTokenType::THIS,

    		    		        CPlusPlusTokenType::CLASS,
    		    		        CPlusPlusTokenType::FLOAT,
    		    		        CPlusPlusTokenType::PROTECTED,
    		    		        CPlusPlusTokenType::THROW,
    		    		        CPlusPlusTokenType::CONST,
    		    		        CPlusPlusTokenType::FOR,
    		    		        CPlusPlusTokenType::PUBLIC,
    		    		        CPlusPlusTokenType::UNION,

    		    		        CPlusPlusTokenType::CONTINUE,
    		    		        CPlusPlusTokenType::GOTO,
    		    		        CPlusPlusTokenType::RETURN,
    		    		        CPlusPlusTokenType::VOID,
    		    		        CPlusPlusTokenType::DO,
    		    		        CPlusPlusTokenType::IF,
    		    		        CPlusPlusTokenType::STATIC,

    		    		        CPlusPlusTokenType::WHILE
    };

    for (int i = 0; i < rw_strings.size(); i++)
    {
        RESERVED_WORDS[rw_strings[i]] = rw_keys[i];
    }

    vector<string> ss_strings =
    {
    		"~", "!", "@", "%", "^", "&", "*", "-", "+", "=", "|", "/",
    		            ":", ";", "?", ">", "<", ".", ",","'","\"","(",")","[","]", "{", "}",  "++", "--",
    		    		"<<",">>","<=", ">=","+=","-=", "*=", "/=", "==","|=","%=","&=","^=", "!=","<<=",">>=", "||",
    		    		"&&", "//", "/*", "*/"
    };

    vector<CPlusPlusTokenType> ss_keys =
    {
    		CPlusPlusTokenType::TILDE,
    		    		        CPlusPlusTokenType::EXCLAMATION,
    		    		        CPlusPlusTokenType::AT_SIGN,
    		    		        CPlusPlusTokenType::PERCENTAGE,
    		    		        CPlusPlusTokenType::CARET,
    		    		        CPlusPlusTokenType::AND,
    		    		        CPlusPlusTokenType::STAR,
    		    		        CPlusPlusTokenType::MINUS,
    		    		        CPlusPlusTokenType::PLUS,
    		    		        CPlusPlusTokenType::EQUALS,
    		    		        CPlusPlusTokenType::PIPE,
    		    		        CPlusPlusTokenType::FRONT_SLASH,

    		    		        CPlusPlusTokenType::COLON,
    		    		        CPlusPlusTokenType::SEMICOLON,
    		    		        CPlusPlusTokenType::QUESTION_MARK,
    		    		        CPlusPlusTokenType::GREATER_THAN,
    		    		        CPlusPlusTokenType::LESS_THAN,
    		    		        CPlusPlusTokenType::PERIOD,
    		    		        CPlusPlusTokenType::COMMA,
    		    		        CPlusPlusTokenType::SINGLE_QUOTE,
    		    		        CPlusPlusTokenType::DOUBLE_QUOTE,
    		    		        CPlusPlusTokenType::LEFT_PAREN,
    		    		        CPlusPlusTokenType::RIGHT_PAREN,
    		    		        CPlusPlusTokenType::LEFT_BRACKET,
    		    				CPlusPlusTokenType::RIGHT_BRACKET,
    		    				CPlusPlusTokenType::LEFT_BRACE,
    		    				CPlusPlusTokenType::RIGHT_BRACE,
    		    				CPlusPlusTokenType::PLUS_PLUS,
    		    				CPlusPlusTokenType::MINUS_MINUS,
    		    				CPlusPlusTokenType::LEFT_SHIFT,
    		    				CPlusPlusTokenType::RIGHT_SHIFT,
    		    				CPlusPlusTokenType::LESS_EQUALS,
    		    				CPlusPlusTokenType::GREATER_EQUALS,
    		    				CPlusPlusTokenType::PLUS_EQUALS,
    		    				CPlusPlusTokenType::MINUS_EQUALS,
    		    				CPlusPlusTokenType::STAR_EQUALS,
    		    				CPlusPlusTokenType::FRONT_SLASH_EQUALS,
    		    				CPlusPlusTokenType::EQUALS_EQUALS,
    		    				CPlusPlusTokenType::PIPE_EQUALS,
    		    				CPlusPlusTokenType::PERCENTAGE_EQUALS,
    		    				CPlusPlusTokenType::AND_EQUALS,
    		    				CPlusPlusTokenType::CARET_EQUALS,
    		    				CPlusPlusTokenType::EXCLAMATION_EQUALS,
    		    				CPlusPlusTokenType::LEFT_SHIFT_EQUALS,
    		    				CPlusPlusTokenType::RIGHT_SHIFT_EQUALS,
    		    				CPlusPlusTokenType::PIPE_PIPE,
    		    				CPlusPlusTokenType::AND_AND,
    		    				CPlusPlusTokenType::FRONT_SLASH_FRONT_SLASH,
    		    				CPlusPlusTokenType::FRONT_SLASH_STAR,
    		    				CPlusPlusTokenType::STAR_FRONT_SLASH
    };

    for (int i = 0; i < ss_strings.size(); i++)
    {
        SPECIAL_SYMBOLS[ss_strings[i]] = ss_keys[i];
    }

    vector<string> ss_names =
    {
    		"TILDE", "EXCLAMATION", "AT_SIGN", "PERCENTAGE", "CARET", "AND", "STAR",
    		    		 "MINUS", "PLUS", "EQUALS", "PIPE", "FRONT_SLASH",
    		    		 "COLON", "SEMICOLON", "QUESTION_MARK", "GREATER_THAN",
    		    		 "LESS_THAN", "PERIOD", "COMMA", "SINGLE_QUOTE",
    		    		 "DOUBLE_QUOTE", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET",
    		    		 "LEFT_BRACE","RIGHT_BRACE","PLUS_PLUS","MINUS_MINUS","LEFT_SHIFT","RIGHT_SHIFT","LESS_EQUALS", "GREATER_EQUALS", "PLUS_EQUALS",
    		    		 "MINUS_EQUALS", "STAR_EQUALS", "FRONT_SLASH_EQUALS", "EQUALS_EQUALS",
    					 "PIPE_EQUALS", "PERCENTAGE_EQUALS", "AND_EQUALS", "CARET_EQUALS",
    					 "EXCLAMATION_EQUALS", "LEFT_SHIFT_EQUALS", "RIGHT_SHIFT_EQUALS",
    					 "PIPE_PIPE", "AND_AND", "FRONT_SLASH_FRONT_SLASH", "FRONT_SLASH_STAR",
    					 "STAR_FRONT_SLASH"
    };

    for (int i = 0; i < ss_names.size(); i++)
    {
        SPECIAL_SYMBOL_NAMES[ss_keys[i]] = ss_names[i];
    }

    INITIALIZED = true;
}

CPlusPlusToken::CPlusPlusToken(Source *source) throw (string)
    : Token(source)
{
    initialize();
}

}}}  // namespace wci::frontend::cPlusPlus
