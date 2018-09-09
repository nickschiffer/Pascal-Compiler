/**
 * <h1>CPlusPlusErrorToken</h1>
 *
 * <p>CPlusPlus error token.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSERRORTOKEN_H_
#define WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSERRORTOKEN_H_

#include <string>
#include "../CPlusPlusError.h"
#include "../CPlusPlusToken.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend::cPlusPlus;

class CPlusPlusErrorToken : public CPlusPlusToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch subsequent characters.
     * @param errorCode the error code.
     * @param tokenText the text of the erroneous token.
     * @throw a string message if an error occurred.
     */
    CPlusPlusErrorToken(Source *source, CPlusPlusErrorCode error_code,
                     string token_text)
        throw (string);

protected:
    /**
     * Do nothing.  Do not consume any source characters.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cPlusPlus::tokens

#endif /* WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSERRORTOKEN_H_ */
