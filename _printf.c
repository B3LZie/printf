#include "main.h"

/**
 * _printf - the function to print f
 * @format: char string identifier to look for
 *
 * Return: the length of the string
 */

int _printf(const char *format, ...)
{
	spec_type st[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};
}
