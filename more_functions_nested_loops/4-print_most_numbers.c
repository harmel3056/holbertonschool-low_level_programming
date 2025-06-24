#include "main.h"

/**
 * print_most_numbers - prints 0 to 9
 * skips 2 and 4i
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
		_putchar(n + '0');
		}
		n = n + 1;
	}
	_putchar('\n');

}
