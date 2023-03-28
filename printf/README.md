       description about c-printf project

Each and every task in this repository was completed as a group project. With this project we focus on the tasks that depend onthe c- printf . To do these tasks, my peers and I have fun. there are few explanation about the c-printf,project requirements, mandatory tasks, advanced tasks. In C programming language, printf is a function used to print output on the console or in a file. It is part of the standard input/output (I/O) library and can be included in C programs using the header file stdio.h._printf _printf is a custom implementation of the C programming function printf.

Project Requirements

All files will be compiled on Ubuntu 14.04 LTS Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic Code must follow the [Betty] style Global variables are not allowed Authorized functions and macros: write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)

Mandatory Tasks

Write function that produces output with conversion specifiers c, s, and %.
 Handle conversion specifiers d, i. Create a man page for your function.

Advanced Tasks

                 Handle conversion specifier b.

                  Handle conversion specifiers u, o, x, X.

                   Use a local buffer of 1024 chars in order to call write as little as possible.

                    Handle conversion specifier S.

                     Handle conversion specifier p.

                     Handle flag characters +, space, and # for non-custom conversion specifiers.

                     Handle length modifiers l+ and h for non-custom conversion specifiers.

                     Handle the field width for non-custom conversion specifiers.

                     Handle the precision for non-custom conversion specifiers.

                      Handle the 0 flag character for non-custom conversion specifiers.

                      Handle the custom conversion specifier r that prints the reversed string.

                        Handle the custom conversion specifier R that prints the rot13'ed string.
0.Write a function that produces output according to a format.

 Prototype: int _printf(const char *format, ...);
 Returns: the number of characters printed (excluding the null byte used to end output to strings)
 write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
        c
        s
        %
You don’t have to reproduce the buffer handling of the C library printf function
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

1.Handle the following conversion specifiers:

    d
    i
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

2.Handle the following custom conversion specifiers:

    b: the unsigned int argument is converted to binary
3.Handle the following conversion specifiers:

    u
    o
    x
    X
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

4.Use a local buffer of 1024 chars in order to call write as little as possible.

5.Handle the following custom conversion specifier:

    S : prints the string.
    Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6.Handle the following conversion specifier: p.

    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

7.Handle the following flag characters for non-custom conversion specifiers:
    +
    space
    #

8.Handle the following length modifiers for non-custom conversion specifiers:

    l
    h

9.Handle the field width for non-custom conversion specifiers.

10.Handle the precision for non-custom conversion specifiers.

11.Handle the 0 flag character for non-custom conversion specifiers.

12.Handle the - flag character for non-custom conversion specifiers.

13.Handle the following custom conversion specifier:

    r : prints the reversed string

14.Handle the following custom conversion specifier:

    R: prints the rot13'ed string
	All above options should work well together bY TemesgenAbdissa and AmanuelDesalegn

