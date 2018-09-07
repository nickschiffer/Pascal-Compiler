/**
 * <h1>CPlusPlusError</h1>
 *
 * <p>CPlusPlus translation errors.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <vector>
#include <map>
#include "CPlusPlusError.h"

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;

bool CPlusPlusError::INITIALIZED = false;

map<CPlusPlusErrorCode, string> CPlusPlusError::SYNTAX_ERROR_MESSAGES;

void CPlusPlusError::initialize()
{
    if (INITIALIZED) return;

    vector<CPlusPlusErrorCode> error_codes =
    {
        CPlusPlusErrorCode::ALREADY_FORWARDED,
        CPlusPlusErrorCode::CASE_CONSTANT_REUSED,
        CPlusPlusErrorCode::IDENTIFIER_REDEFINED,
        CPlusPlusErrorCode::IDENTIFIER_UNDEFINED,
        CPlusPlusErrorCode::INCOMPATIBLE_ASSIGNMENT,
        CPlusPlusErrorCode::INCOMPATIBLE_TYPES,
        CPlusPlusErrorCode::INVALID_ASSIGNMENT,
        CPlusPlusErrorCode::INVALID_CHARACTER,
        CPlusPlusErrorCode::INVALID_CONSTANT,
        CPlusPlusErrorCode::INVALID_EXPONENT,
        CPlusPlusErrorCode::INVALID_EXPRESSION,
        CPlusPlusErrorCode::INVALID_FIELD,
        CPlusPlusErrorCode::INVALID_FRACTION,
        CPlusPlusErrorCode::INVALID_IDENTIFIER_USAGE,
        CPlusPlusErrorCode::INVALID_INDEX_TYPE,
        CPlusPlusErrorCode::INVALID_NUMBER,
        CPlusPlusErrorCode::INVALID_STATEMENT,
        CPlusPlusErrorCode::INVALID_SUBRANGE_TYPE,
        CPlusPlusErrorCode::INVALID_TARGET,
        CPlusPlusErrorCode::INVALID_TYPE,
        CPlusPlusErrorCode::INVALID_VAR_PARM,
        CPlusPlusErrorCode::MIN_GT_MAX,
        CPlusPlusErrorCode::MISSING_BEGIN,
        CPlusPlusErrorCode::MISSING_COLON,
        CPlusPlusErrorCode::MISSING_COLON_EQUALS,
        CPlusPlusErrorCode::MISSING_COMMA,
        CPlusPlusErrorCode::MISSING_CONSTANT,
        CPlusPlusErrorCode::MISSING_DO,
        CPlusPlusErrorCode::MISSING_DOT_DOT,
        CPlusPlusErrorCode::MISSING_END,
        CPlusPlusErrorCode::MISSING_EQUALS,
        CPlusPlusErrorCode::MISSING_FOR_CONTROL,
        CPlusPlusErrorCode::MISSING_IDENTIFIER,
        CPlusPlusErrorCode::MISSING_LEFT_BRACKET,
        CPlusPlusErrorCode::MISSING_OF,
        CPlusPlusErrorCode::MISSING_PERIOD,
        CPlusPlusErrorCode::MISSING_PROGRAM,
        CPlusPlusErrorCode::MISSING_RIGHT_BRACKET,
        CPlusPlusErrorCode::MISSING_RIGHT_PAREN,
        CPlusPlusErrorCode::MISSING_SEMICOLON,
        CPlusPlusErrorCode::MISSING_THEN,
        CPlusPlusErrorCode::MISSING_TO_DOWNTO,
        CPlusPlusErrorCode::MISSING_UNTIL,
        CPlusPlusErrorCode::MISSING_VARIABLE,
        CPlusPlusErrorCode::NOT_CONSTANT_IDENTIFIER,
        CPlusPlusErrorCode::NOT_RECORD_VARIABLE,
        CPlusPlusErrorCode::NOT_TYPE_IDENTIFIER,
        CPlusPlusErrorCode::RANGE_INTEGER,
        CPlusPlusErrorCode::RANGE_REAL,
        CPlusPlusErrorCode::STACK_OVERFLOW,
        CPlusPlusErrorCode::TOO_MANY_LEVELS,
        CPlusPlusErrorCode::TOO_MANY_SUBSCRIPTS,
        CPlusPlusErrorCode::UNEXPECTED_EOF,
        CPlusPlusErrorCode::UNEXPECTED_TOKEN,
        CPlusPlusErrorCode::UNIMPLEMENTED,
        CPlusPlusErrorCode::UNRECOGNIZABLE,
        CPlusPlusErrorCode::WRONG_NUMBER_OF_PARMS,

        // Fatal errors.
        CPlusPlusErrorCode::IO_ERROR,
        CPlusPlusErrorCode::TOO_MANY_ERRORS
    };

    vector<string> error_messages =
    {
        "Already specified in FORWARD",
        "CASE constant reused",
        "Redefined identifier",
        "Undefined identifier",
        "Incompatible assignment",
        "Incompatible types",
        "Invalid assignment statement",
        "Invalid character",
        "Invalid constant",
        "Invalid exponent",
        "Invalid expression",
        "Invalid field",
        "Invalid fraction",
        "Invalid identifier usage",
        "Invalid index type",
        "Invalid number",
        "Invalid statement",
        "Invalid subrange type",
        "Invalid assignment target",
        "Invalid type",
        "Invalid VAR parameter",
        "Min limit greater than max limit",
        "Missing BEGIN",
        "Missing :",
        "Missing :=",
        "Missing ,",
        "Missing constant",
        "Missing DO",
        "Missing ..",
        "Missing END",
        "Missing =",
        "Invalid FOR control variable",
        "Missing identifier",
        "Missing [",
        "Missing OF",
        "Missing .",
        "Missing PROGRAM",
        "Missing ]",
        "Missing )",
        "Missing ;",
        "Missing THEN",
        "Missing TO or DOWNTO",
        "Missing UNTIL",
        "Missing variable",
        "Not a constant identifier",
        "Not a record variable",
        "Not a type identifier",
        "Integer literal out of range",
        "Real literal out of range",
        "Stack overflow",
        "Nesting level too deep",
        "Too many subscripts",
        "Unexpected end of file",
        "Unexpected token",
        "Unimplemented feature",
        "Unrecognizable input",
        "Wrong number of actual parameters",

        // Fatal errors.
        "Object I/O error",
        "Too many syntax errors"
    };

    for (int i = 0; i < error_codes.size(); i++)
    {
        SYNTAX_ERROR_MESSAGES[error_codes[i]] = error_messages[i];
    }

    INITIALIZED = true;
}

}}}  // namespace wci::frontend::cPlusPlus
