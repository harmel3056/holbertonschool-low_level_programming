#include "main.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n = n + 1;
	}
	_putchar('\n');

}
