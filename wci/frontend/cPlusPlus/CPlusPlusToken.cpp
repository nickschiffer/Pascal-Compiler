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
        "AND", "ARRAY", "BEGIN", "CASE", "CONST", "DIV", "DO", "DOWNTO",
        "ELSE", "END", "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IN",
        "LABEL", "MOD", "NIL", "NOT", "OF", "OR", "PACKED", "PROCEDURE",
        "PROGRAM", "RECORD", "REPEAT", "SET", "THEN", "TO", "TYPE",
        "UNTIL", "VAR", "WHILE", "WITH"
    };

    vector<CPlusPlusTokenType> rw_keys =
    {
        CPlusPlusTokenType::AND,
        CPlusPlusTokenType::ARRAY,
        CPlusPlusTokenType::BEGIN,
        CPlusPlusTokenType::CASE,
        CPlusPlusTokenType::CONST,
        CPlusPlusTokenType::DIV,
        CPlusPlusTokenType::DO,
        CPlusPlusTokenType::DOWNTO,

        CPlusPlusTokenType::ELSE,
        CPlusPlusTokenType::END,
        CPlusPlusTokenType::FILE,
        CPlusPlusTokenType::FOR,
        CPlusPlusTokenType::FUNCTION,
        CPlusPlusTokenType::GOTO,
        CPlusPlusTokenType::IF,
        CPlusPlusTokenType::IN,

        CPlusPlusTokenType::LABEL,
        CPlusPlusTokenType::MOD,
        CPlusPlusTokenType::NIL,
        CPlusPlusTokenType::NOT,
        CPlusPlusTokenType::OF,
        CPlusPlusTokenType::OR,
        CPlusPlusTokenType::PACKED,
        CPlusPlusTokenType::PROCEDURE,

        CPlusPlusTokenType::PROGRAM,
        CPlusPlusTokenType::RECORD,
        CPlusPlusTokenType::REPEAT,
        CPlusPlusTokenType::SET,
        CPlusPlusTokenType::THEN,
        CPlusPlusTokenType::TO,
        CPlusPlusTokenType::TYPE,

        CPlusPlusTokenType::UNTIL,
        CPlusPlusTokenType::VAR,
        CPlusPlusTokenType::WHILE,
        CPlusPlusTokenType::WITH
    };

    for (int i = 0; i < rw_strings.size(); i++)
    {
        RESERVED_WORDS[rw_strings[i]] = rw_keys[i];
    }

    vector<string> ss_strings =
    {
        "+", "-", "*", "/", ":=", ".", ",", ";", ":", "'", "=", "<>",
        "<", "<=", ">=", ">", "(", ")", "[", "]", "{", "}",  "^", ".."
    };

    vector<CPlusPlusTokenType> ss_keys =
    {
        CPlusPlusTokenType::PLUS,
        CPlusPlusTokenType::MINUS,
        CPlusPlusTokenType::STAR,
        CPlusPlusTokenType::SLASH,
        CPlusPlusTokenType::COLON_EQUALS,
        CPlusPlusTokenType::DOT,
        CPlusPlusTokenType::COMMA,
        CPlusPlusTokenType::SEMICOLON,
        CPlusPlusTokenType::COLON,
        CPlusPlusTokenType::QUOTE,
        CPlusPlusTokenType::EQUALS,
        CPlusPlusTokenType::NOT_EQUALS,

        CPlusPlusTokenType::LESS_THAN,
        CPlusPlusTokenType::LESS_EQUALS,
        CPlusPlusTokenType::GREATER_EQUALS,
        CPlusPlusTokenType::GREATER_THAN,
        CPlusPlusTokenType::LEFT_PAREN,
        CPlusPlusTokenType::RIGHT_PAREN,
        CPlusPlusTokenType::LEFT_BRACKET,
        CPlusPlusTokenType::RIGHT_BRACKET,
        CPlusPlusTokenType::LEFT_BRACE,
        CPlusPlusTokenType::RIGHT_BRACE,
        CPlusPlusTokenType::UP_ARROW,
        CPlusPlusTokenType::DOT_DOT
    };

    for (int i = 0; i < ss_strings.size(); i++)
    {
        SPECIAL_SYMBOLS[ss_strings[i]] = ss_keys[i];
    }

    vector<string> ss_names =
    {
        "PLUS", "MINUS", "STAR", "SLASH", "COLON_EQUALS", "DOT", "COMMA",
        "SEMICOLON", "COLON", "QUOTE", "EQUALS", "NOT_EQUALS",

        "LESS_THAN", "LESS_EQUALS", "GREATER_EQUALS", "GREATER_THAN",
        "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET",
        "LEFT_BRACE", "RIGHT_BRACE", "UP_ARROW", "DOT_DOT"
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
