/**
 * <h1>CPlusPlusSpecialSymbolToken</h1>
 *
 * <p> CPlusPlus special symbol tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_PASCAL_TOKENS_PASCALSPECIALSYMBOLTOKEN_H_
#define WCI_FRONTEND_PASCAL_TOKENS_PASCALSPECIALSYMBOLTOKEN_H_

#include <string>
#include "../CPlusPlusToken.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend::cPlusPlus;

class CPlusPlusSpecialSymbolToken : public CPlusPlusToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CPlusPlusSpecialSymbolToken(Source *source) throw (string);

protected:
    /**
     * Extract a CPlusPlus special symbol token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cPlusPlus::tokens

#endif /* WCI_FRONTEND_PASCAL_TOKENS_PASCALSPECIALSYMBOLTOKEN_H_ */
