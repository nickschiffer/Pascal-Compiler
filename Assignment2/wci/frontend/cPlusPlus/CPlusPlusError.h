/**
 * <h1>CPlusPlusError</h1>
 *
 * <p>CPlusPlus translation errors.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSERROR_H_
#define WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSERROR_H_

#include <string>
#include <map>

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;

/**
 * CPlusPlus error codes.
 */
enum class CPlusPlusErrorCode
{
    ALREADY_FORWARDED,
    CASE_CONSTANT_REUSED,
    IDENTIFIER_REDEFINED,
    IDENTIFIER_UNDEFINED,
    INCOMPATIBLE_ASSIGNMENT,
    INCOMPATIBLE_TYPES,
    INVALID_ASSIGNMENT,
    INVALID_CHARACTER,
    INVALID_CONSTANT,
    INVALID_EXPONENT,
    INVALID_EXPRESSION,
    INVALID_FIELD,
    INVALID_FRACTION,
    INVALID_IDENTIFIER_USAGE,
    INVALID_INDEX_TYPE,
    INVALID_NUMBER,
    INVALID_STATEMENT,
    INVALID_SUBRANGE_TYPE,
    INVALID_TARGET,
    INVALID_TYPE,
    INVALID_VAR_PARM,
    MIN_GT_MAX,
    MISSING_BEGIN,
    MISSING_COLON,
    MISSING_COLON_EQUALS,
    MISSING_COMMA,
    MISSING_CONSTANT,
    MISSING_DO,
    MISSING_DOT_DOT,
    MISSING_END,
    MISSING_EQUALS,
    MISSING_FOR_CONTROL,
    MISSING_IDENTIFIER,
    MISSING_LEFT_BRACKET,
    MISSING_OF,
    MISSING_PERIOD,
    MISSING_PROGRAM,
    MISSING_RIGHT_BRACKET,
    MISSING_RIGHT_PAREN,
    MISSING_SEMICOLON,
    MISSING_THEN,
    MISSING_TO_DOWNTO,
    MISSING_UNTIL,
    MISSING_VARIABLE,
    NOT_CONSTANT_IDENTIFIER,
    NOT_RECORD_VARIABLE,
    NOT_TYPE_IDENTIFIER,
    RANGE_INTEGER,
    RANGE_REAL,
    STACK_OVERFLOW,
    TOO_MANY_LEVELS,
    TOO_MANY_SUBSCRIPTS,
    UNEXPECTED_EOF,
    UNEXPECTED_TOKEN,
    UNIMPLEMENTED,
    UNRECOGNIZABLE,
    WRONG_NUMBER_OF_PARMS,

    // Fatal errors.
    IO_ERROR,
    TOO_MANY_ERRORS
};

constexpr CPlusPlusErrorCode ALREADY_FORWARDED = CPlusPlusErrorCode::ALREADY_FORWARDED;
constexpr CPlusPlusErrorCode CASE_CONSTANT_REUSED = CPlusPlusErrorCode::CASE_CONSTANT_REUSED;
constexpr CPlusPlusErrorCode IDENTIFIER_REDEFINED = CPlusPlusErrorCode::IDENTIFIER_REDEFINED;
constexpr CPlusPlusErrorCode IDENTIFIER_UNDEFINED = CPlusPlusErrorCode::IDENTIFIER_UNDEFINED;
constexpr CPlusPlusErrorCode INCOMPATIBLE_ASSIGNMENT = CPlusPlusErrorCode::INCOMPATIBLE_ASSIGNMENT;
constexpr CPlusPlusErrorCode INCOMPATIBLE_TYPES = CPlusPlusErrorCode::INCOMPATIBLE_TYPES;
constexpr CPlusPlusErrorCode INVALID_ASSIGNMENT = CPlusPlusErrorCode::INVALID_ASSIGNMENT;
constexpr CPlusPlusErrorCode INVALID_CHARACTER = CPlusPlusErrorCode::INVALID_CHARACTER;
constexpr CPlusPlusErrorCode INVALID_CONSTANT = CPlusPlusErrorCode::INVALID_CONSTANT;
constexpr CPlusPlusErrorCode INVALID_EXPONENT = CPlusPlusErrorCode::INVALID_EXPONENT;
constexpr CPlusPlusErrorCode INVALID_EXPRESSION = CPlusPlusErrorCode::INVALID_EXPRESSION;
constexpr CPlusPlusErrorCode INVALID_FIELD = CPlusPlusErrorCode::INVALID_FIELD;
constexpr CPlusPlusErrorCode INVALID_FRACTION = CPlusPlusErrorCode::INVALID_FRACTION;
constexpr CPlusPlusErrorCode INVALID_IDENTIFIER_USAGE = CPlusPlusErrorCode::INVALID_IDENTIFIER_USAGE;
constexpr CPlusPlusErrorCode INVALID_INDEX_TYPE = CPlusPlusErrorCode::INVALID_INDEX_TYPE;
constexpr CPlusPlusErrorCode INVALID_NUMBER = CPlusPlusErrorCode::INVALID_NUMBER;
constexpr CPlusPlusErrorCode INVALID_STATEMENT = CPlusPlusErrorCode::INVALID_STATEMENT;
constexpr CPlusPlusErrorCode INVALID_SUBRANGE_TYPE = CPlusPlusErrorCode::INVALID_SUBRANGE_TYPE;
constexpr CPlusPlusErrorCode INVALID_TARGET = CPlusPlusErrorCode::INVALID_TARGET;
constexpr CPlusPlusErrorCode INVALID_TYPE = CPlusPlusErrorCode::INVALID_TYPE;
constexpr CPlusPlusErrorCode INVALID_VAR_PARM = CPlusPlusErrorCode::INVALID_VAR_PARM;
constexpr CPlusPlusErrorCode MIN_GT_MAX = CPlusPlusErrorCode::MIN_GT_MAX;
constexpr CPlusPlusErrorCode MISSING_BEGIN = CPlusPlusErrorCode::MISSING_BEGIN;
constexpr CPlusPlusErrorCode MISSING_COLON = CPlusPlusErrorCode::MISSING_COLON;
constexpr CPlusPlusErrorCode MISSING_COMMA = CPlusPlusErrorCode::MISSING_COMMA;
constexpr CPlusPlusErrorCode MISSING_CONSTANT = CPlusPlusErrorCode::MISSING_CONSTANT;
constexpr CPlusPlusErrorCode MISSING_DO = CPlusPlusErrorCode::MISSING_DO;
constexpr CPlusPlusErrorCode MISSING_DOT_DOT = CPlusPlusErrorCode::MISSING_DOT_DOT;
constexpr CPlusPlusErrorCode MISSING_END = CPlusPlusErrorCode::MISSING_END;
constexpr CPlusPlusErrorCode MISSING_EQUALS = CPlusPlusErrorCode::MISSING_EQUALS;
constexpr CPlusPlusErrorCode MISSING_COLON_EQUALS = CPlusPlusErrorCode::MISSING_COLON_EQUALS;
constexpr CPlusPlusErrorCode MISSING_FOR_CONTROL = CPlusPlusErrorCode::MISSING_FOR_CONTROL;
constexpr CPlusPlusErrorCode MISSING_IDENTIFIER = CPlusPlusErrorCode::MISSING_IDENTIFIER;
constexpr CPlusPlusErrorCode MISSING_LEFT_BRACKET = CPlusPlusErrorCode::MISSING_LEFT_BRACKET;
constexpr CPlusPlusErrorCode MISSING_OF = CPlusPlusErrorCode::MISSING_OF;
constexpr CPlusPlusErrorCode MISSING_PERIOD = CPlusPlusErrorCode::MISSING_PERIOD;
constexpr CPlusPlusErrorCode MISSING_PROGRAM = CPlusPlusErrorCode::MISSING_PROGRAM;
constexpr CPlusPlusErrorCode MISSING_RIGHT_BRACKET = CPlusPlusErrorCode::MISSING_RIGHT_BRACKET;
constexpr CPlusPlusErrorCode MISSING_RIGHT_PAREN = CPlusPlusErrorCode::MISSING_RIGHT_PAREN;
constexpr CPlusPlusErrorCode MISSING_SEMICOLON = CPlusPlusErrorCode::MISSING_SEMICOLON;
constexpr CPlusPlusErrorCode MISSING_THEN = CPlusPlusErrorCode::MISSING_THEN;
constexpr CPlusPlusErrorCode MISSING_TO_DOWNTO = CPlusPlusErrorCode::MISSING_TO_DOWNTO;
constexpr CPlusPlusErrorCode MISSING_UNTIL = CPlusPlusErrorCode::MISSING_UNTIL;
constexpr CPlusPlusErrorCode MISSING_VARIABLE = CPlusPlusErrorCode::MISSING_VARIABLE;
constexpr CPlusPlusErrorCode NOT_CONSTANT_IDENTIFIER = CPlusPlusErrorCode::NOT_CONSTANT_IDENTIFIER;
constexpr CPlusPlusErrorCode NOT_RECORD_VARIABLE = CPlusPlusErrorCode::NOT_RECORD_VARIABLE;
constexpr CPlusPlusErrorCode NOT_TYPE_IDENTIFIER = CPlusPlusErrorCode::NOT_TYPE_IDENTIFIER;
constexpr CPlusPlusErrorCode RANGE_INTEGER = CPlusPlusErrorCode::RANGE_INTEGER;
constexpr CPlusPlusErrorCode RANGE_REAL = CPlusPlusErrorCode::RANGE_REAL;
constexpr CPlusPlusErrorCode STACK_OVERFLOW = CPlusPlusErrorCode::STACK_OVERFLOW;
constexpr CPlusPlusErrorCode TOO_MANY_LEVELS = CPlusPlusErrorCode::TOO_MANY_LEVELS;
constexpr CPlusPlusErrorCode TOO_MANY_SUBSCRIPTS = CPlusPlusErrorCode::TOO_MANY_SUBSCRIPTS;
constexpr CPlusPlusErrorCode UNEXPECTED_EOF = CPlusPlusErrorCode::UNEXPECTED_EOF;
constexpr CPlusPlusErrorCode UNEXPECTED_TOKEN = CPlusPlusErrorCode::UNEXPECTED_TOKEN;
constexpr CPlusPlusErrorCode UNIMPLEMENTED = CPlusPlusErrorCode::UNIMPLEMENTED;
constexpr CPlusPlusErrorCode UNRECOGNIZABLE = CPlusPlusErrorCode::UNRECOGNIZABLE;
constexpr CPlusPlusErrorCode WRONG_NUMBER_OF_PARMS = CPlusPlusErrorCode::WRONG_NUMBER_OF_PARMS;

constexpr CPlusPlusErrorCode IO_ERROR = CPlusPlusErrorCode::IO_ERROR;
constexpr CPlusPlusErrorCode TOO_MANY_ERRORS = CPlusPlusErrorCode::TOO_MANY_ERRORS;

class CPlusPlusError
{
public:
    static map<CPlusPlusErrorCode, string> SYNTAX_ERROR_MESSAGES;

    /**
     * Initialize the static map.
     */
    static void initialize();

private:
    static bool INITIALIZED;
};

}}}  // namespace wci::frontend::cPlusPlus

#endif /* WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSERROR_H_ */
