/**
 * <h1>CPlusPlusScanner</h1>
 *
 * <p>The CPlusPlus scanner.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSSCANNER_H_
#define WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSSCANNER_H_

#include "../Scanner.h"
#include "../Source.h"
#include "../Token.h"

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;
using namespace wci::frontend;

class CPlusPlusScanner : public Scanner
{
public:
    /**
     * Constructor
     * @param source the source to be used with this scanner.
     */
    CPlusPlusScanner(Source *source);

protected:
    /**
     * Extract and return the next CPlusPlus token from the source.
     * @return the next token.
     * @throw a string message if an error occurred.
     */
    Token *extract_token() throw (string);

private:
    /**
     * Skip whitespace characters by consuming them.  A comment is whitespace.
     * @throw a string message if an error occurred.
     */
    void skip_white_space() throw (string);
};

}}} // namespace wci::frontend::cPlusPlus

#endif /* WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSSCANNER_H_ */
