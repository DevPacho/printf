#include "main.h"

/**
 * print_c - function that prints characters.
 * @args: argument list.
 * Return: (1) a character.
 */

int print_c(va_list args)
{
	letsprint(va_arg(args, int));
	return (1);
}

/**
 * print_s - function that prints a string.
 * @args: argument list.
 * Return: a.
 */

int print_s(va_list args)
{
	int a;
	char *ps = va_arg(args, char *);

	if (ps == NULL)
		return (NULL);

	for (a = 0; ps[a]; a++)
		letsprint (ps[a]);
	return (a);
}

/**
 * print_pctg - function that prints percentage.
 * @args: argument list.
 * Return: (1) a character.
 */

int print_pctg(va_list args)
{
	letsprint('%');
	return (1);
}
