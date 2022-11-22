#include "main.h"

/**
 * _putchar - printing 1 character
 * @c: the char to be printed
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
