/*
 * CPlusPlusCharacterToken.h
 *
 *  Created on: 08-Sep-2018
 *      Author: babbu
 */

#ifndef WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSCHARACTERTOKEN_H_
#define WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSCHARACTERTOKEN_H_


#include <string>
#include "../CPlusPlusToken.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend::cPlusPlus;

class CPlusPlusCharacterToken : public CPlusPlusToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CPlusPlusCharacterToken(Source *source) throw (string);

protected:
    /**
     * Extract a CPlusPlus string token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cPlusPlus::tokens
#endif /* WCI_FRONTEND_CPLUSPLUS_TOKENS_CPLUSPLUSCHARACTERTOKEN_H_ */
