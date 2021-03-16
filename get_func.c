#include "holberton.h"

/**
 * @*_typedef- struct of specifier types
 * @str: arguments being passed
 * @y: position of args
 *
 * Return: 0
 */

int (*_typedef(const char *str, int y))(va_list)
{
	sp_t types[] = {
		{"c", print_char},
		{"s", print_string},
/*
 *		{"i", print_int},
 *		{"d", print_int},
*/
		{NULL, NULL}
	};

	int j; /* iterator */

	for (j = 0; types[j].args != '\0'; j++)
	{
		if (types[j].args[0] == str[y] && str[y + 1] != '\0')
		{
			return (types[j].func);
		}
	}
	return (NULL);
}
