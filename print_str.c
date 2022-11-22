#include "main.h"

/**
 * print_str - printing a string
 * @ap: the string list
 * Return: the number of chars printed
 */

int print_str(va_list ap)
{
	char *s;
	int i;

	i = 0;
	s = va_arg(ap, char);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
