#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

/**
 * struct specifier- our struct name
 * @args: all specifier arguments
 * @func: pointer function
 */

typedef struct specifier
{
	char *args;
	int (*func)(va_list);
} sp_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*_typedef(const char *str))(va_list);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list dandi);

#endif
