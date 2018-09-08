/**
 * <h1>CPlusPlusSpecialSymbolToken</h1>
 *
 * <p> CPlusPlus special symbol tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "CPlusPlusSpecialSymbolToken.h"
#include "../CPlusPlusError.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cPlusPlus;

CPlusPlusSpecialSymbolToken::CPlusPlusSpecialSymbolToken(Source *source) throw (string)
    : CPlusPlusToken(source)
{
    extract();
}

void CPlusPlusSpecialSymbolToken::extract() throw (string)
{
    char current_ch = current_char();
    bool good_symbol = true;

    text = current_ch;

    switch (current_ch)
    {
        // Single-character special symbols.
        case '+':  case '-':  case '*':  case '/':  case ',':
        case ';':  case '\'': case '=':  case '(':  case ')':
        case '[':  case ']':  case '{':  case '}':  case '^':
        {
            next_char();  // consume character
            break;
        }

        // : or :=
        case ':':
        {
            current_ch = next_char();  // consume ':';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '='
            }

            break;
        }

        // < or <= or <>
        case '<':
        {
            current_ch = next_char();  // consume '<';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '='
            }
            else if (current_ch == '>')
            {
                text += current_ch;
                next_char();  // consume '>'
            }

            break;
        }

        // > or >=
        case '>':
        {
            current_ch = next_char();  // consume '>';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '='
            }

            break;
        }

        // . or ..
        case '.':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '.')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        default:
        {
            next_char();  // consume bad character
            type = (TokenType) (CPPT_ERROR);
            value = (int) INVALID_CHARACTER;
            good_symbol = false;
        }
    }

    // Set the type if it wasn't an error.
    if (good_symbol) {
        type = (TokenType) (CPlusPlusToken::SPECIAL_SYMBOLS[text]);
    }
}

}}}}  // namespace wci::frontend::cPlusPlus::tokens
