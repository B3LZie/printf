#include "main.h"

/**
 * _parse - the parsing of what was selected
 * @format: the string chosen
 * @st: the array of options
 * @ap: the va args
 * Return: the num of chars
 */

int _parse(const char *format, spec_type st[], va_list ap)
{
	int i, j, val, chars_to_print;

	chars_to_print = 0, i = 0, j = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (st[j].s != NULL)
			{
				if (format[i + 1] == st[j].s[0])
				{
					val = st[j].f(ap);
					if (val == -1)
						return (-1);
					chars_to_print += val;
					break;
				}
				j++;
			}
			if (st[j].s == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					chars_to_print = chars_to_print + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			chars_to_print++;
		}
		i++;
	}
	return (chars_to_print);
}
