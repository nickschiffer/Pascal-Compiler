/**
 * <h1>FrontendFactory</h1>
 *
 * <p>A factory class that creates parsers for specific source languages.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "FrontendFactory.h"
#include "Parser.h"
#include "Scanner.h"
#include "Source.h"
#include "cPlusPlus/CPlusPlusParserTD.h"
#include "cPlusPlus/CPlusPlusScanner.h"

namespace wci { namespace frontend {

using namespace wci::frontend::cPlusPlus;

Parser *FrontendFactory::create_parser(string language, string type,
                                       Source *source)
    throw (string)
{
    if ((language == "CPlusPlus") && (type == "top-down"))
    {
        Scanner *scanner = new CPlusPlusScanner(source);
        return new CPlusPlusParserTD(scanner);
    }
    else if (language != "CPlusPlus") {
        throw new string("Parser factory: Invalid language '" +
                         language + "'");
    }
    else {
        throw new string("Parser factory: Invalid type '" +
                         type + "'");
    }
}

}} // namespace wci::frontend
