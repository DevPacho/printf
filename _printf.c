#include "main.h"

/**
 * get_conversion - function that selects the correct function.
 * @format: is a character string.
 * The format string is composed of zero or more directives.
 * Return: pointer to the operation function.
 */

int (*get_conversion(const char *format))(va_list)
{
	op_t conv[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL}
	};

	int a = 0;

	for (; conv[a].op != NULL; a++)
	{
		if (*(conv[a].op) == *format)
		{
			break;
		}
	}
	return (conv[a].f);
}

/**
 * _printf - function that produces output according to a format.
 * @format: is a character string.
 * The format string is composed of zero or more directives.
 * Return: c.
 */

int _printf(const char *format, ...)
{
	int b = 0;
	int c = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[b])
	{
		for (; format[b] != '%' && format[b]; b++)
		{
			letsprint(format[b]);
			c++;
		}
		if (!format[b])
			return (c);
		f = get_conversion(&format[b + 1]);
		if (f != NULL)
		{
			c += f(args);
			b += 2;
			continue;
		}
		if (!format[b + 1])
			return (-1);
		letsprint(format[b]);
		c++;
		if (format[b + 1] == '%')
			b += 2;
		else
			b++;
	}
	va_end(args);
	return (c);
}
