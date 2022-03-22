#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct conversion - conv struct.
 * @op: access the structure.
 * @f: the function associated.
 */
typedef struct conversion
{
	char *op;
	int (*f)(va_list);
} op_t;

int (*get_conversion(const char *format))(va_list);
int _printf(const char *format, ...);
int letsprint(char c);
int print_c(va_list c);
int print_s(va_list s);
#endif
