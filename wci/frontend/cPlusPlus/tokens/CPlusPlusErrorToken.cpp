/**
 * <h1>CPlusPlusErrorToken</h1>
 *
 * <p>CPlusPlus error token.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "CPlusPlusErrorToken.h"
#include "../../Token.h"
#include "../CPlusPlusToken.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend::cPlusPlus;

CPlusPlusErrorToken::CPlusPlusErrorToken(Source *source, CPlusPlusErrorCode error_code,
                                   string token_text)
    throw (string)
    : CPlusPlusToken(source)
{
    type = (TokenType) CPPT_ERROR;
    text = token_text;
    value = (int) error_code;
}

void CPlusPlusErrorToken::extract() throw (string)
{
    // do nothing
}

}}}}  // namespace wci::frontend::cPlusPlus::tokens
