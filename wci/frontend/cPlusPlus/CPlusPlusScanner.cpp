/**
 * <h1>CPlusPlusScanner</h1>
 *
 * <p>The CPlusPlus scanner.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <iostream>
#include "CPlusPlusScanner.h"
#include "CPlusPlusToken.h"
#include "CPlusPlusError.h"
#include "../Source.h"
#include "tokens/CPlusPlusWordToken.h"
#include "tokens/CPlusPlusNumberToken.h"
#include "tokens/CPlusPlusStringToken.h"
#include "tokens/CPlusPlusSpecialSymbolToken.h"
#include "tokens/CPlusPlusErrorToken.h"

namespace wci { namespace frontend { namespace cPlusPlus {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cPlusPlus::tokens;

CPlusPlusScanner::CPlusPlusScanner(Source *source) : Scanner(source)
{
}

Token *CPlusPlusScanner::extract_token() throw (string)
{
    skip_white_space();

    Token *token;
    char current_ch = current_char();
    string string_ch = " ";

    string_ch[0] = current_ch;

    // Construct the next token.  The current character determines the
    // token type.
    if (current_ch == Source::END_OF_FILE)
    {
        token = nullptr;
    }
    else if (isalpha(current_ch))
    {
        token = new CPlusPlusWordToken(source);
    }
    else if (isdigit(current_ch))
    {
        token = new CPlusPlusNumberToken(source);
    }
    else if (current_ch == '\'')
    {
        token = new CPlusPlusStringToken(source);
    }
    else if (CPlusPlusToken::SPECIAL_SYMBOLS.find(string_ch)
                != CPlusPlusToken::SPECIAL_SYMBOLS.end())
    {
        token = new CPlusPlusSpecialSymbolToken(source);
    }
    else
    {
        token = new CPlusPlusErrorToken(source, INVALID_CHARACTER, string_ch);
        next_char();  // consume character
    }

    return token;
}

void CPlusPlusScanner::skip_white_space() throw (string)
{
    char current_ch = current_char();

    while (isspace(current_ch) || (current_ch == '/')) {

        // Start of a comment?
        if (current_ch == '/'){
            current_ch = next_char();
            //Check for second character
            if (current_ch == '/'){
                while ((current_ch != Source::END_OF_LINE) && (current_ch != Source::END_OF_FILE)){
                    current_ch = next_char();
                }
            }
            else if (current_ch == '*') {
                do {
                    current_ch = next_char();
                    if (current_ch == '*')
                        current_ch = next_char();
                        if (current_ch == '/') break;
                } while (current_ch != Source::END_OF_FILE);

            }

            else {
            }
        }
        else {
            current_ch = next_char();
        }
}

}}} // namespace wci::frontend::cPlusPlus
