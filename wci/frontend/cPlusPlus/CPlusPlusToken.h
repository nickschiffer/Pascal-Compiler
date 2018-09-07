/**
 * <h1>CPlusPlusToken</h1>
 *
 * <p>Base class for CPlusPlus token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */

#ifndef WCI_FRONTEND_PASCAL_PASCALTOKEN_H_
#define WCI_FRONTEND_PASCAL_PASCALTOKEN_H_

#include <string>
#include <map>
#include "../Token.h"
#include "../Source.h"

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;
using namespace wci::frontend;

/**
 * CPlusPlus token types.
 */
enum class CPlusPlusTokenType
{
    // Reserved words.
    AND, ARRAY, BEGIN, CASE, CONST, DIV, DO, DOWNTO, ELSE, END,
    FILE, FOR, FUNCTION, GOTO, IF, IN, LABEL, MOD, NIL, NOT,
    OF, OR, PACKED, PROCEDURE, PROGRAM, RECORD, REPEAT, SET,
    THEN, TO, TYPE, UNTIL, VAR, WHILE, WITH,

    // Special symbols.
    PLUS, MINUS, STAR, SLASH, COLON_EQUALS,
    DOT, COMMA, SEMICOLON, COLON, QUOTE,
    EQUALS, NOT_EQUALS, LESS_THAN, LESS_EQUALS,
    GREATER_EQUALS, GREATER_THAN, LEFT_PAREN, RIGHT_PAREN,
    LEFT_BRACKET, RIGHT_BRACKET, LEFT_BRACE, RIGHT_BRACE,
    UP_ARROW, DOT_DOT,

    IDENTIFIER, INTEGER, REAL, STRING,
    ERROR, END_OF_FILE,
};

constexpr CPlusPlusTokenType PT_AND = CPlusPlusTokenType::AND;
constexpr CPlusPlusTokenType PT_ARRAY = CPlusPlusTokenType::ARRAY;
constexpr CPlusPlusTokenType PT_BEGIN = CPlusPlusTokenType::BEGIN;
constexpr CPlusPlusTokenType PT_CASE = CPlusPlusTokenType::CASE;
constexpr CPlusPlusTokenType PT_CONST = CPlusPlusTokenType::CONST;
constexpr CPlusPlusTokenType PT_DIV = CPlusPlusTokenType::DIV;
constexpr CPlusPlusTokenType PT_DO = CPlusPlusTokenType::DO;
constexpr CPlusPlusTokenType PT_DOWNTO = CPlusPlusTokenType::DOWNTO;

constexpr CPlusPlusTokenType PT_ELSE = CPlusPlusTokenType::ELSE;
constexpr CPlusPlusTokenType PT_END = CPlusPlusTokenType::END;
constexpr CPlusPlusTokenType PT_FILE = CPlusPlusTokenType::FILE;
constexpr CPlusPlusTokenType PT_FOR = CPlusPlusTokenType::FOR;
constexpr CPlusPlusTokenType PT_FUNCTION = CPlusPlusTokenType::FUNCTION;
constexpr CPlusPlusTokenType PT_GOTO = CPlusPlusTokenType::GOTO;
constexpr CPlusPlusTokenType PT_IF = CPlusPlusTokenType::IF;
constexpr CPlusPlusTokenType PT_IN = CPlusPlusTokenType::IN;

constexpr CPlusPlusTokenType PT_LABEL = CPlusPlusTokenType::LABEL;
constexpr CPlusPlusTokenType PT_MOD = CPlusPlusTokenType::MOD;
constexpr CPlusPlusTokenType PT_NIL = CPlusPlusTokenType::NIL;
constexpr CPlusPlusTokenType PT_NOT = CPlusPlusTokenType::NOT;
constexpr CPlusPlusTokenType PT_OF = CPlusPlusTokenType::OF;
constexpr CPlusPlusTokenType PT_OR = CPlusPlusTokenType::OR;
constexpr CPlusPlusTokenType PT_PACKED = CPlusPlusTokenType::PACKED;
constexpr CPlusPlusTokenType PT_PROCEDURE = CPlusPlusTokenType::PROCEDURE;

constexpr CPlusPlusTokenType PT_PROGRAM = CPlusPlusTokenType::PROGRAM;
constexpr CPlusPlusTokenType PT_RECORD = CPlusPlusTokenType::RECORD;
constexpr CPlusPlusTokenType PT_REPEAT = CPlusPlusTokenType::REPEAT;
constexpr CPlusPlusTokenType PT_SET = CPlusPlusTokenType::SET;
constexpr CPlusPlusTokenType PT_THEN = CPlusPlusTokenType::THEN;
constexpr CPlusPlusTokenType PT_TO = CPlusPlusTokenType::TO;
constexpr CPlusPlusTokenType PT_TYPE = CPlusPlusTokenType::TYPE;

constexpr CPlusPlusTokenType PT_UNTIL = CPlusPlusTokenType::UNTIL;
constexpr CPlusPlusTokenType PT_VAR = CPlusPlusTokenType::VAR;
constexpr CPlusPlusTokenType PT_WHILE = CPlusPlusTokenType::WHILE;
constexpr CPlusPlusTokenType PT_WITH = CPlusPlusTokenType::WITH;

constexpr CPlusPlusTokenType PT_PLUS = CPlusPlusTokenType::PLUS;
constexpr CPlusPlusTokenType PT_MINUS = CPlusPlusTokenType::MINUS;
constexpr CPlusPlusTokenType PT_STAR = CPlusPlusTokenType::STAR;
constexpr CPlusPlusTokenType PT_SLASH = CPlusPlusTokenType::SLASH;
constexpr CPlusPlusTokenType PT_COLON_EQUALS = CPlusPlusTokenType::COLON_EQUALS;
constexpr CPlusPlusTokenType PT_DOT = CPlusPlusTokenType::DOT;
constexpr CPlusPlusTokenType PT_COMMA = CPlusPlusTokenType::COMMA;
constexpr CPlusPlusTokenType PT_SEMICOLON = CPlusPlusTokenType::SEMICOLON;
constexpr CPlusPlusTokenType PT_COLON = CPlusPlusTokenType::COLON;
constexpr CPlusPlusTokenType PT_QUOTE = CPlusPlusTokenType::QUOTE;
constexpr CPlusPlusTokenType PT_EQUALS = CPlusPlusTokenType::EQUALS;
constexpr CPlusPlusTokenType PT_NOT_EQUALS = CPlusPlusTokenType::NOT_EQUALS;

constexpr CPlusPlusTokenType PT_LESS_THAN = CPlusPlusTokenType::LESS_THAN;
constexpr CPlusPlusTokenType PT_LESS_EQUALS = CPlusPlusTokenType::LESS_EQUALS;
constexpr CPlusPlusTokenType PT_GREATER_EQUALS = CPlusPlusTokenType::GREATER_EQUALS;
constexpr CPlusPlusTokenType PT_GREATER_THAN = CPlusPlusTokenType::GREATER_THAN;
constexpr CPlusPlusTokenType PT_LEFT_PAREN = CPlusPlusTokenType::LEFT_PAREN;
constexpr CPlusPlusTokenType PT_RIGHT_PAREN = CPlusPlusTokenType::RIGHT_PAREN;
constexpr CPlusPlusTokenType PT_LEFT_BRACKET = CPlusPlusTokenType::LEFT_BRACKET;
constexpr CPlusPlusTokenType PT_RIGHT_BRACKET = CPlusPlusTokenType::RIGHT_BRACKET;
constexpr CPlusPlusTokenType PT_LEFT_BRACE = CPlusPlusTokenType::LEFT_BRACE;
constexpr CPlusPlusTokenType PT_RIGHT_BRACE = CPlusPlusTokenType::RIGHT_BRACE;
constexpr CPlusPlusTokenType PT_UP_ARROW = CPlusPlusTokenType::UP_ARROW;
constexpr CPlusPlusTokenType PT_DOT_DOT = CPlusPlusTokenType::DOT_DOT;

constexpr CPlusPlusTokenType PT_IDENTIFIER = CPlusPlusTokenType::IDENTIFIER;
constexpr CPlusPlusTokenType PT_INTEGER = CPlusPlusTokenType::INTEGER;
constexpr CPlusPlusTokenType PT_REAL = CPlusPlusTokenType::REAL;
constexpr CPlusPlusTokenType PT_STRING = CPlusPlusTokenType::STRING;
constexpr CPlusPlusTokenType PT_ERROR = CPlusPlusTokenType::ERROR;
constexpr CPlusPlusTokenType PT_END_OF_FILE = CPlusPlusTokenType::END_OF_FILE;

class CPlusPlusToken : public Token
{
public:
    static map<string, CPlusPlusTokenType> RESERVED_WORDS;
    static map<string, CPlusPlusTokenType> SPECIAL_SYMBOLS;
    static map<CPlusPlusTokenType, string> SPECIAL_SYMBOL_NAMES;

protected:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CPlusPlusToken(Source *source) throw (string);

private:
    static bool INITIALIZED;

    /**
     * Initialize the static maps.
     */
    static void initialize();
};

}}}  // namespace wci::frontend::cPlusPlus

#endif /* WCI_FRONTEND_PASCAL_PASCALTOKEN_H_ */
