/**
 * <h1>CPlusPlusStringToken</h1>
 *
 * <p> CPlusPlus string tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "CPlusPlusStringToken.h"
#include "../CPlusPlusError.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cPlusPlus;

CPlusPlusStringToken::CPlusPlusStringToken(Source *source) throw (string)
    : CPlusPlusToken(source)
{
    extract();
}

void CPlusPlusStringToken::extract() throw (string)
{
    string value_str = "";

    char current_ch = next_char();  // consume initial quote
    //text += "\"";

    // Get string characters.
    do
    {
        // Replace any whitespace character with a blank.
        if (isspace(current_ch)) current_ch = ' ';
        if (current_ch == '\\') {
            current_ch = next_char();
            if (current_ch == 't')  current_ch = '\t';
            if (current_ch == 'n'){
                text += "\n";
                current_ch = next_char();
            }
            if (current_ch == '\"'){
                text += "\"";
                current_ch = next_char();
            } 
        }

        if ((current_ch != '\"') && (current_ch != EOF))
        {
            text += current_ch;
            value_str  += current_ch;
            current_ch = next_char();  // consume character
        }

        // Quote?  Each pair of adjacent quotes represents a single-quote.
        if (current_ch == '\"')
        {
            while ((current_ch == '\"') && (peek_char() == '\"'))
            {
                text += "''";
                value_str  += current_ch;  // append single-quote
                current_ch = next_char();  // consume pair of quotes
                current_ch = next_char();
            }
        }
    } while ((current_ch != '\"') && (current_ch != Source::END_OF_FILE));

    if (current_ch == '\"')
    {
        next_char();  // consume final quote
        //text += '\"';
        type = (TokenType) CPPT_STRING;
        value = value_str;
    }
    else
    {
        type = (TokenType) CPPT_ERROR;
        value = (int) UNEXPECTED_EOF;
    }
}

}}}}  // namespace wci::frontend::cPlusPlus::tokens
