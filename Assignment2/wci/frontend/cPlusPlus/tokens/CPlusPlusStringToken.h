/**
 * <h1>CPlusPlusStringToken</h1>
 *
 * <p> CPlusPlus string tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSSTRINGTOKEN_H_
#define WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSSTRINGTOKEN_H_

#include <string>
#include "../CPlusPlusToken.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend::cPlusPlus;

class CPlusPlusStringToken : public CPlusPlusToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CPlusPlusStringToken(Source *source) throw (string);

protected:
    /**
     * Extract a CPlusPlus string token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cPlusPlus::tokens

#endif /* WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSSTRINGTOKEN_H_ */
