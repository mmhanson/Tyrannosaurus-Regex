/*
 * A simple regex engine written in C.
 * The implementation of the methods in 'regex.h'.
 *
 * Written by Max Hanson, September 2019.
 * Licensed under MIT, see LICENSE.md for details.
 */


#include "regex.h"


typedef struct TokenTag
{
    char text[5]; // TODO may need to make bigger, small for regexes?
} Token;

/*  === INTERFACE IMPLEMENTATION ===  */

short regex_compile(char* regex, Regex* regex)
{
    regex->text = regex;
    dfa = malloc(sizeof(Graph));

    // TODO parse regex string and init'lz graph after needed # of nodes is known
}

short regex_match(char* str, Regex regex)
{
    
}

/*  === HELPER METHODS ===  */

Token* tokenize_regex(char* regex)
{

}
