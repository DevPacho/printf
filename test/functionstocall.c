#include "main.h"

/**
 * print_c - function that prints characters.
 * @c: argument of list.
 * Return: (1) to stdinpt.
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	letsprint(ch);
	return (1);
}

/**
 * print_s - function that prints a string.
 * @s: argument of list.
 * Return: a.
 */

int print_s(va_list s)
{
	int a;
	char *ps = va_arg(s, char *);

	if (ps == NULL)
		ps = "(null)";

	for (a = 0; ps[a]; a++)
		letsprint (ps[a]);
	return (a);
}
