## Printf

Overview: This paper explains how _printf works, and how to design the proper formatting specification for any occasion Prototype of _printf function int _printf(const char *format, ...); Returns: the number of characters printed (excluding the null byte used to end output to strings).


## Usage

Include holberton.h Call _printf, passing a formatted string with any format specifiers and optional arguments Upon success, it writes desired output to stdout Upon error, it returns -1 If NULL is passed in as a string argument, it prints (null) Format Specifier.


## Format

%c print a single character. 

%d print a decimal (base 10) number. 

%i print an integer in base 10. 

%s print a string of characters. 

%R Prints a rot13'ed string. 

%% print a percent sign (% also works).

%o print an  unsigned  int  argument is converted to unsigned octal.

%u print an unsigned decimal.

%x or %X print unsigned hexadecimal (x  and  X)  notation. The  letters abcdef are used for x conversions; the let- ters ABCDEF are used for X conversions.


## Example Usage

To use the _printf function you simply need to compile all files .c including the header holberton.h with a main function.

### Example:

main.c

'#include "holberton.h"

int main(void)
    {
	     _printf("let's print something using our function!");

   return (0);
    }

Compilation:

$ gcc *.c -o

Output:

let's print something using our function!

### more examples:

_printf ("%c", 'd') prints the character d.

_printf ("%s", "Hello, world\n") prints "Hello, world", followed by a new line

_printf ("%%") prints the character %

_printf ("%i", 415) prints 415 (signed decimal notation)

_printf ("%d", 808) prints 808 (signed decimal notation) 


## Files

File Name Description (_printf.c) produces output according to a format

File containing functions for specifiers _putchar.c (get_func.c)

File containing function that writes a char to stdout (f_print1.c,
f_print2.c, f_print3.c)

File containing functions for more specifiers (holberton.h) header file with function prototypes and struct for specifiers. 


## Running the tests

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

$ ./a.out


## About

Created on Ubuntu 14.04 LTS

Compiled with gcc 4.8.4, using flags: -Wall -Werror -Wextra and -pedantic

## Authors

https://github.com/jassemb

## License

This project is licensed under the holberton school License.
