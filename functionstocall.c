#include "main.h"

/**
 * print_c - function that prints characters.
 * @c: argument of list.
 * Return: (1) to stdinpt.
 */

int print_c(va_list c)
{
	char ch = va_arg(c, int);

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

/**
 * _rec - recursing function for zeros.
 * @num: number.
 * @rec: makes the recursion.
 * Return: <= 0 return 1, else return recursion.
 */

int _rec(int num, int rec)
{
	if (rec <= 0)
		return (1);
	else
		return (num * _rec(num, rec - 1));
}

/**
 * print_d - function that prints integer.
 * @d: argument of list.
 * Return: a integer.
 */
int print_d(va_list d)
{
	int n = va_arg(d, int);
	int i = 0, b = 0, a = 0, total = 0;/* variables a recorrer*/
	int p_numero = 0, u_numero = 0, revertir = 0, g_numero = 0;

	g_numero = n;/* Guardar numeros*/
	if (n < 0)
	{
		total += letsprint('-');
		u_numero = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		u_numero = ((n % 10) + '0');
		n /= 10;
	}
	for (revertir = 0; n > 0; i++)
	{
		revertir = ((revertir * 10) + (n % 10));
		n /= 10;
		if (n <= 9)
			p_numero = revertir;
	}
	for (; revertir > 0;)
	{
		b = ((revertir % 10) + '0');
		total += letsprint(b);
		revertir /= 10;
	}
	total += letsprint(u_numero);

	if (p_numero == (g_numero / _rec(10, i)))
	{
		for (a = 0; a <= i - 2; a++)
		total += letsprint('0');
	}
	return (total);
}
