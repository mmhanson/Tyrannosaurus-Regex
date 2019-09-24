This project is a basic regular expression engine written in C.

I wrote this to learn more about lexical analysis as I learn about compilers.
This engine works by first parsing the regexes, then constructing an NFA, then
converting that NFA to a DFA, then simulating the DFA to match strings to the
regex.
NFAs and DFAs are represented with the graph header from my [Basecamp library](https://github.com/mmhanson/Basecamp),
and they're constructed with [Thompson's construction algorithm](https://en.wikipedia.org/wiki/Thompson's_construction).
Most of the work here follows closely to the [Dragon Book, section 3.7](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools).

TODO insert a basic tutorial
TODO insert a list of supported regex tokens
