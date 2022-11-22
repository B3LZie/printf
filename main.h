#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct type - the type of variable to print
 * @s: the string type
 * @f: printing fn, returns num of chars printed
 */

typedef struct type
{
	char *s;
	int (*f)();
} spec_type;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_str(va_list);
int print_percentage(void);

#endif
