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
		AUTO, DOUBLE, INT, STRUCT,
		BREAK, ELSE, LONG, SWITCH,
		CASE, ENUM, NAMESPACE, TEMPLATE,
		CHAR, EXTERN, OPERATOR, THIS,
		CLASS, FLOAT, PROTECTED, THROW,
		CONST, FOR, PUBLIC, UNION,
		CONTINUE, GOTO, RETURN, VOID,
		DO, IF, STATIC, WHILE,
	//    AND, ARRAY, BEGIN, CASE, CONST, DIV, DO, DOWNTO, ELSE, END,
	//    FILE, FOR, FUNCTION, GOTO, IF, IN, LABEL, MOD, NIL, NOT,
	//    OF, OR, PACKED, PROCEDURE, PROGRAM, RECORD, REPEAT, SET,
	//    THEN, TO, TYPE, UNTIL, VAR, WHILE, WITH,

	    // Special symbols.

		TILDE, EXCLAMATION, AT_SIGN, PERCENTAGE, CARET, AND, STAR,
		MINUS, PLUS, EQUALS, PIPE, FRONT_SLASH, COLON, SEMICOLON,
		QUESTION_MARK, GREATER_THAN, LESS_THAN, PERIOD, COMMA,
		SINGLE_QUOTE, DOUBLE_QUOTE, LEFT_PAREN, RIGHT_PAREN, LEFT_BRACKET,
		RIGHT_BRACKET, LEFT_BRACE, RIGHT_BRACE, PLUS_PLUS, MINUS_MINUS,
		LEFT_SHIFT, RIGHT_SHIFT, LESS_EQUALS, GREATER_EQUALS, PLUS_EQUALS,
		MINUS_EQUALS, STAR_EQUALS, FRONT_SLASH_EQUALS, EQUALS_EQUALS,
		PIPE_EQUALS, PERCENTAGE_EQUALS, AND_EQUALS, CARET_EQUALS,
		EXCLAMATION_EQUALS, LEFT_SHIFT_EQUALS, RIGHT_SHIFT_EQUALS,
		PIPE_PIPE, AND_AND, FRONT_SLASH_FRONT_SLASH, FRONT_SLASH_STAR,
		STAR_FRONT_SLASH,

	//    PLUS, MINUS, STAR, SLASH, COLON_EQUALS,
	//    DOT, COMMA, SEMICOLON, COLON, QUOTE,
	//    EQUALS, NOT_EQUALS, LESS_THAN, LESS_EQUALS,
	//    GREATER_EQUALS, GREATER_THAN, LEFT_PAREN, RIGHT_PAREN,
	//    LEFT_BRACKET, RIGHT_BRACKET, LEFT_BRACE, RIGHT_BRACE,
	//    UP_ARROW, DOT_DOT,

	    IDENTIFIER, INTEGER, REAL, STRING,
	    ERROR, END_OF_FILE,CHARACTER,
	};

	constexpr CPlusPlusTokenType CPPT_AUTO = CPlusPlusTokenType::AUTO;
	constexpr CPlusPlusTokenType CPPT_DOUBLE = CPlusPlusTokenType::DOUBLE;
	constexpr CPlusPlusTokenType CPPT_INT = CPlusPlusTokenType::INT;
	constexpr CPlusPlusTokenType CPPT_STRUCT = CPlusPlusTokenType::STRUCT;
	constexpr CPlusPlusTokenType CPPT_BREAK = CPlusPlusTokenType::BREAK;
	constexpr CPlusPlusTokenType CPPT_ELSE = CPlusPlusTokenType::ELSE;
	constexpr CPlusPlusTokenType CPPT_LONG = CPlusPlusTokenType::LONG;
	constexpr CPlusPlusTokenType CPPT_SWITCH = CPlusPlusTokenType::SWITCH;

	constexpr CPlusPlusTokenType CPPT_CASE = CPlusPlusTokenType::CASE;
	constexpr CPlusPlusTokenType CPPT_ENUM = CPlusPlusTokenType::ENUM;
	constexpr CPlusPlusTokenType CPPT_NAMESPACE = CPlusPlusTokenType::NAMESPACE;
	constexpr CPlusPlusTokenType CPPT_TEMPLATE = CPlusPlusTokenType::TEMPLATE;
	constexpr CPlusPlusTokenType CPPT_CHAR = CPlusPlusTokenType::CHAR;
	constexpr CPlusPlusTokenType CPPT_EXTERN = CPlusPlusTokenType::EXTERN;
	constexpr CPlusPlusTokenType CPPT_OPERATOR = CPlusPlusTokenType::OPERATOR;
	constexpr CPlusPlusTokenType CPPT_THIS = CPlusPlusTokenType::THIS;

	constexpr CPlusPlusTokenType CPPT_CLASS = CPlusPlusTokenType::CLASS;
	constexpr CPlusPlusTokenType CPPT_FLOAT = CPlusPlusTokenType::FLOAT;
	constexpr CPlusPlusTokenType CPPT_PROTECTED = CPlusPlusTokenType::PROTECTED;
	constexpr CPlusPlusTokenType CPPT_THROW = CPlusPlusTokenType::THROW;
	constexpr CPlusPlusTokenType CPPT_CONST = CPlusPlusTokenType::CONST;
	constexpr CPlusPlusTokenType CPPT_FOR = CPlusPlusTokenType::FOR;
	constexpr CPlusPlusTokenType CPPT_PUBLIC = CPlusPlusTokenType::PUBLIC;
	constexpr CPlusPlusTokenType CPPT_UNION = CPlusPlusTokenType::UNION;

	constexpr CPlusPlusTokenType CPPT_CONTINUE = CPlusPlusTokenType::CONTINUE;
	constexpr CPlusPlusTokenType CPPT_GOTO = CPlusPlusTokenType::GOTO;
	constexpr CPlusPlusTokenType CPPT_RETURN = CPlusPlusTokenType::RETURN;
	constexpr CPlusPlusTokenType CPPT_VOID = CPlusPlusTokenType::VOID;
	constexpr CPlusPlusTokenType CPPT_DO = CPlusPlusTokenType::DO;
	constexpr CPlusPlusTokenType CPPT_IF = CPlusPlusTokenType::IF;
	constexpr CPlusPlusTokenType CPPT_STATIC = CPlusPlusTokenType::STATIC;
	constexpr CPlusPlusTokenType CPPT_WHILE = CPlusPlusTokenType::WHILE;

	constexpr CPlusPlusTokenType CPPT_IDENTIFIER = CPlusPlusTokenType::IDENTIFIER;
	constexpr CPlusPlusTokenType CPPT_INTEGER = CPlusPlusTokenType::INTEGER;
	constexpr CPlusPlusTokenType CPPT_REAL = CPlusPlusTokenType::REAL;
	constexpr CPlusPlusTokenType CPPT_STRING = CPlusPlusTokenType::STRING;
	constexpr CPlusPlusTokenType CPPT_ERROR = CPlusPlusTokenType::ERROR;
	constexpr CPlusPlusTokenType CPPT_END_OF_FILE = CPlusPlusTokenType::END_OF_FILE;
	constexpr CPlusPlusTokenType CPPT_CHARACTER = CPlusPlusTokenType::CHARACTER;



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
