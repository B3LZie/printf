#include "main.h"

/**
 * print_int - printing an int
 * @ap: the int
 * Return: the num of chars
 */

int print_int(va_list ap)
{
	int n, z, num, digit, power, i;

	n = va_arg(ap, int);
	z = n % 10, power = 1, i = 1;
	num = n / 10;
	num = n;

	if (z < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		z = -z;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			power = power * 10;
			num = num / 10;
		}
		num = n;
		while (power > 0)
		{
			digit = num / power;
			_putchar(digit + '0');
			num = num - (digit * power);
			power = power / 10;
			i++;
		}
	}
	_putchar(z + '0');
	return (i);
}
