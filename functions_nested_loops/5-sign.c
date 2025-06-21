#include "main.h"

/**
 * print_sign - checks letters and prints the sign of a number
 * and lowercase characters
 * @n: character to check
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
