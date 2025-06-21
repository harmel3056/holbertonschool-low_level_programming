#include "main.h"

/**
 * print_last_digit - prints final digit of a number
 * @d: character to check
 * Return: rightmost digit of a number
 */

int print_last_digit(int d)
{
	int r = d % 10;

	if (r < 0)
	r = -r;

	_putchar (r + '0');
	return (r);
}
