#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: is a character string.
 * The format string is composed of zero or more directives.
 * Return: pointer to the operation function.
 */

int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_pctg},
		{NULL, NULL}
	};

	int a = 0;
	char b = 0;
	va_list args;

	va_start(args, format);

	for (; format[a]; a++)
	{
		if (format[a] == '%')
		{
			if (format[a + 1] == '%')
			{
				letsprint('%');
				a++;
			}

			for (; ops[b].op; b++)
			{

			}	  
		}
	}
	va_end(args);
	return (a);
}
