/**
 * <h1>CPlusPlusParserTD</h1>
 *
 * <p>The top-down CPlusPlus parser.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSPARSERTD_H_
#define WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSPARSERTD_H_

#include "../Parser.h"
#include "../Scanner.h"
#include "CPlusPlusErrorHandler.h"

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;
using namespace wci::frontend;

class CPlusPlusParserTD : public Parser
{
public:
    /**
     * Constructor.
     * @param scanner the scanner to be used with this parser.
     */
    CPlusPlusParserTD(Scanner *scanner);

    /**
     * Constructor for subclasses.
     * @param parent the parent parser.
     */
    CPlusPlusParserTD(CPlusPlusParserTD *parent);

    /**
     * Parse a CPlusPlus source program and generate the symbol table
     * and the intermediate code.
     * Implementation of wci::frontend::Parser.
     * @throw a string message if an error occurred.
     */
    void parse() throw (string);

    /**
     * Return the number of syntax errors found by the parser.
     * Implementation of wci::frontend::Parser.
     * @return the error count.
     */
    int get_error_count() const;

protected:
    static CPlusPlusErrorHandler error_handler;
};

}}} // namespace wci::frontend::cPlusPlus


#endif /* WCI_FRONTEND_CPLUSPLUS_CPLUSPLUSPARSERTD_H_ */
