#include "main.h"

/**
 * print_sign(int n) - checks letters and prints the sign of a number
 * and lowercase characters
 * @n: character to check
 * Return: 1 if 'n' is greater than 0, print '+'
 * 0 if 'n' is equal to 0, print '0'
 * -1 if n is below 0, print '-'
 */

int print_sign(int n)
{
	if (n > 48)
	{
		return (1);
		print_sign('+');
	}
	if (n == 48)
	{
		return (0);
		print_sign('0');
	}
	else
	{
		return (-1);
		print_sign('-');
	}
}
