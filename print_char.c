#include "main.h"

/**
 * print_char - printing a char
 * @ap: the char list
 * Return: the number of chars
 */

int print_char(va_list ap)
{
	char s;

	s = va_arg(ap, int);
	_putchar(s);
	return (1);
}
