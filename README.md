_printf

Overview
This paper explains how _printf works, and how to design the proper formatting specification for
any occasion
Prototype of _printf function
int _printf(const char *format, ...); Returns: the number of characters printed (excluding the null byte used to end output to strings)

Usage
Include holberton.h
Call _printf, passing a formatted string with any format specifiers and optional arguments
Upon success, it writes desired output to stdout 
Upon error, it returns -1
If NULL is passed in as a string argument, it prints (null)
Format Specifier	
%c	print a single character
%d 	print a decimal (base 10) number
%i 	print an integer in base 10
%s 	print a string of characters
%R	Prints a rot13'ed string
%% 	print a percent sign (\% also works)
Example Usage
_printf ("%c", 'd') prints the character d
_printf ("%s", "Hello, world\n") prints "Hello, world", followed by a new line
_printf ("%%") prints the character %
_printf ("%i", 415) prints 415 (signed decimal notation)
_printf ("%d", 808) prints 808 (signed decimal notation)
_printf ("%R", "Hello\n") prints "Uryyb", followed by a new line

Files
File Name	Description
_printf.c	produces output according to a format
helper_funcs.c	File containing functions for specifiers
_putchar.c	File containing function that writes a char to stdout
_more_funcs.c	File containing functions for more specifiers
holberton.h	Header file with function prototypes and struct for specifiers
About
Created on Ubuntu 14.04 LTS. Compiled with gcc 4.8.4, using flags: -Wall -Werror -Wextra and -pedantic

