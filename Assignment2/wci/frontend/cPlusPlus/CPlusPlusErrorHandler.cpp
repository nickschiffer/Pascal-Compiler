/**
 * <h1>CPlusPlusErrorHandler</h1>
 *
 * <p>Error handler CPlusPlus syntax errors.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "CPlusPlusErrorHandler.h"
#include "../Token.h"
#include "../Parser.h"
#include "CPlusPlusError.h"
#include "../../message/Message.h"

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;
using namespace wci::frontend;

const int CPlusPlusErrorHandler::MAX_ERRORS = 25;
int CPlusPlusErrorHandler::error_count = 0;

int CPlusPlusErrorHandler::get_error_count() const { return error_count; }

void CPlusPlusErrorHandler::flag(Token *token, CPlusPlusErrorCode error_code,
                              Parser *parser)
{
    // Notify the parser's listeners.
    string error_message = CPlusPlusError::SYNTAX_ERROR_MESSAGES[error_code];
    Message message(SYNTAX_ERROR,
                    LINE_NUMBER, to_string(token->get_line_number()),
                    POSITION, to_string(token->get_position()),
                    TOKEN_TEXT, token->get_text(),
                    ERROR_MESSAGE, error_message);
    parser->send_message(message);

    if (++error_count > MAX_ERRORS)
    {
        abort_translation(TOO_MANY_ERRORS, parser);
    }
}

void CPlusPlusErrorHandler::abort_translation(CPlusPlusErrorCode error_code,
                                           Parser *parser)
{
    // Notify the parser's listeners and then abort.
    string error_message = "FATAL ERROR: " +
                           CPlusPlusError::SYNTAX_ERROR_MESSAGES[error_code];
    Message message(SYNTAX_ERROR,
                    LINE_NUMBER, "0",
                    POSITION, "0",
                    TOKEN_TEXT, "",
                    ERROR_MESSAGE, error_message);
    parser->send_message(message);
    exit(-2);
}

}}}  // namespace wci::frontend::cPlusPlus
