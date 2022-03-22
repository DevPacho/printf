#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct op - struct.
 * @op: name
 * @f: the function associated.
 */
typedef struct op
{
	char *op;
	int (*f)(va_list args);
} op_t;

int _printf(const char *format, ...);
int letsprint(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_pctg(va_list args);
#endif
