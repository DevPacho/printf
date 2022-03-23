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
			c++; /**contador que guarda las veces que imprime para sacar la longitud.*/
		}
		if (!format[b])
			return (c);
		f = get_conversion(&format[b + 1]); 
		/**inicializamos el puntero a función que llama al formato e iterando en lo que se le pase, b es una posició y 1 otra */
		if (f != NULL) /**si get tiene contenido*/
		{
			c += f(args); /**al contador se le pasan los argumentos*/
			b += 2; /**salta b + 1*/
			continue; /**sale del if y sigue validando condiciones*/
		}
		if (!format[b + 1]) 
			return (-1);
		letsprint(format[b]);
		c++;
		if (format[b + 1] == '%') /**por default toma el caracter especial (secretos de printf)*/
			b += 2; /**se salta las dos posiciones de los %%*/
		else
			b++; /**de lo contrario a los %%, solo se salta la posición de b(%) y valida b + 1.*/
	}
	va_end(args);
	return (c);
}
