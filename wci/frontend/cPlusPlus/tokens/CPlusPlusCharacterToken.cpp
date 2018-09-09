#include <string>
#include "CPlusPlusCharacterToken.h"
#include "../CPlusPlusError.h"

namespace wci { namespace frontend { namespace cPlusPlus { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cPlusPlus;

CPlusPlusCharacterToken::CPlusPlusCharacterToken(Source *source) throw (string)
    : CPlusPlusToken(source)
{
    extract();
}

void CPlusPlusCharacterToken::extract() throw (string)
{
    string value_str = "";

    char current_ch = next_char();
    //current_ch = next_char();  // consume initial quote

      //text += "\"";
    // Get string characters.
//    do
//    {
//        // Replace any whitespace character with a blank.
//        if (isspace(current_ch)) current_ch = ' ';
//        if (current_ch == '\\') {
//            current_ch = next_char();
//            if (current_ch == 't')  current_ch = '\t';
//            if (current_ch == 'n'){
//                text += "\n";
//                current_ch = next_char();
//            }
//            if (current_ch == '\"'){
//                text += "\"";
//                current_ch = next_char();
//            }
//        }
//
//        if ((current_ch != '\"') && (current_ch != EOF))
//        {
//            text += current_ch;
//            value_str  += current_ch;
//            current_ch = next_char();  // consume character
//        }
//
//        // Quote?  Each pair of adjacent quotes represents a single-quote.
//        if (current_ch == '\"')
//        {
//            while ((current_ch == '\"') && (peek_char() == '\"'))
//            {
//                text += "''";
//                value_str  += current_ch;  // append single-quote
//                current_ch = next_char();  // consume pair of quotes
//                current_ch = next_char();
//            }
//        }
//    } while ((current_ch != '\"') && (current_ch != Source::END_OF_FILE));
//    if(current_ch == '\'')
//    {}
    if(current_ch =='\\')
    {
    	value_str += current_ch;
    	current_ch = next_char();
    	if(current_ch =='n')
    	{
    		value_str += current_ch;
    		current_ch=next_char();
    	}
    	else if(current_ch =='t')
    	{
    		value_str += current_ch;
    		current_ch=next_char();
    	}
    	else if(current_ch =='\\')
    	{
    		value_str += current_ch;
    		current_ch=next_char();
    	}
    	else if(current_ch =='\'')
    	{
    		value_str += current_ch;
    		current_ch=next_char();
    	}
//    	if(current_ch =='n' || current_ch == 't'||
//    			current_ch == '\\' || current_ch == '\'')
//    	{
//    		value_str += current_ch;
//    		next_char();
//    	}

    }
    else
    {
    	//cout<<"hello";
    	value_str += current_ch;

    	//cout<<"["<<value_str<<"]";
    	current_ch = next_char(); // consume current char
    }
    if (current_ch == '\'')
    {
    	//cout<<"in scanner=="<<current_ch;
    	next_char();  // consume final quote
    	text = value_str;
    	//text += '\"';
        type = (TokenType) CPPT_CHARACTER;
        value_str = "CHARACTER";
        value = value_str;
        //cout<<"WHAT THE FUCK";
    }
    else
    {
       	type = (TokenType) CPPT_ERROR;
        value = (int) UNEXPECTED_EOF;
    }
}

}}}}  // namespace wci::frontend::cPlusPlus::tokens
