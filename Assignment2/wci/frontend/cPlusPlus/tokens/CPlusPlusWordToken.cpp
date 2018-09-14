/**
 * <h1>CPlusPlusWordToken</h1>
 *
 * <p> CPlusPlus word tokens (identifiers and reserved words).</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <iostream>
#include <string>
#include <map>
#include "CPlusPlusWordToken.h"
#include "../CPlusPlusError.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cPlusPlus;

CPlusPlusWordToken::CPlusPlusWordToken(Source *source) throw (string)
    : CPlusPlusToken(source)
{
    extract();
}

/**
 * Extract a CPlusPlus word token from the source.
 * @throws Exception if an error occurred.
 */
void CPlusPlusWordToken::extract() throw (string)
{
    char current_ch = current_char();

    // Get the word characters (letter or digit). The scanner has
    // already determined that the first character is a letter.
    while (isalnum(current_ch))
    {
        text += current_ch;
        current_ch = next_char();  // consume character
    }

    // Is it a reserved word or an identifier?
    string upper_case = to_upper(text);
    if (CPlusPlusToken::RESERVED_WORDS.find(text)
            != CPlusPlusToken::RESERVED_WORDS.end())
    {
        // Reserved word.
        type = (TokenType) CPlusPlusToken::RESERVED_WORDS[text];
        value = upper_case;
    }
    else
    {
        // Identifier.
        type = (TokenType) CPPT_IDENTIFIER;
    }
}

}}}}  // namespace wci::frontend::cPlusPlus::tokens
