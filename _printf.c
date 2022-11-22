#include "main.h"

/**
 * _printf - the function to print f
 * @format: char string identifier to look for
 *
 * Return: the length of the string
 */

int _printf(const char *format, ...)
{
	int num_of_chars;
	spec_type st[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_dec},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	num_of_chars = _parse(format, st, ap);
	va_end(ap);
	return (num_of_chars);
}
