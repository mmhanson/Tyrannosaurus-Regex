# Makefile for the regex engine and example
#
# Written by Max Hanson, September 2019
# Licensed under MIT. See LICENSE.md for details.


clean:
	rm -rf obj/*
	rm -rf tests
	rm -rf example

tests: obj/regex_tests.o obj/unity.o obj/regex.o
	gcc -g -o tests obj/regex_tests.o obj/unity.o obj/regex.o

example: obj/regex_example.o obj/regex.o
	gcc -g -o example obj/regex_example.o obj/regex.o

obj/regex_example.o: src/regex_example.c src/regex.h
	mkdir -p obj
	gcc -g -c --std=c89 -asni -pedantic -o obj/regex_example.o src/regex_example.c

obj/regex_tests.o: src/regex_tests.c src/regex.h
	mkdir -p obj
	gcc -g -c -o obj/regex_tests.o src/regex_tests.o

obj/regex.o: src/regex.c
	mkdir -p obj
	gcc -g -c --std=c89 -ansi -pedantic -o obj/regex.o src/regex.c

obj/unity.o: deps/unity/unity.c
	mkdir -p obj
	gcc -g -c -o obj/unity.o deps/unity/unity.c

