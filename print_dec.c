#include "main.h"

/**
 * print_dec - printing a decimal
 * @ap: the decimal
 * Return: num of chars
 */

int print_dec(va_list ap)
{
	int n, num, i, last, digit, power;

	n = va_arg(ap, int);
	last = n % 10, i = 1, power = 1;
	n = n / 10, num = n;
	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
		n = n * -1;
		last = last * -1;
		i++;
	}
	if (n > 0)
	{
		while (num / 10 != 0)
		{
			power = power * 10;
			num = num / 10;
		}
		while (power > 0)
		{
			digit = num / power;
			_putchar(digit + '0');
			num = num - (digit * power);
			power = power / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
