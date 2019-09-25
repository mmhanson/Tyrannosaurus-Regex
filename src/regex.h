/*
 * A simple regex engine written in C.
 *
 * TODO add a simple description.
 *
 * Written by Max Hanson, September 2019.
 * Licensed under MIT, see LICENSE.md for details.
 */

#ifndef REGEX_H
#define REGEX_H

#include "graph.h"

typedef struct RegexTag
{
    Graph dfa; /*  the compiled version of the regex  */
    char* text; /*  the text representation of the regex  */
} Regex;

/*
 * Compile a regex into a deterministic finite automata (DFA).
 *
 * @regex_text: text representation of the regex.
 * @return: DFA representation of the regex.
 */
Regex regex_compile(char* regex_text);

/*
 * Simulate a regex DFA to test if it matches a string.
 *
 * @str: string to test against the regex.
 * @regex: the DFA to simulate.
 * @return: a boolean, 0 if @str matches and 1 if not.
 */
short regex_match(char* str, Regex regex);

#endif
