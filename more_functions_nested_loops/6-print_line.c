#include "main.h"

/**
 * print_line - prints lines based on value
 * Return: void
 */

void print_line(void)
{
	int n = 0;
	int l = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		_putchar('_' * n);



	while (r < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n = n + 1;
		}
	_putchar('\n');
	r = r + 1;
	}
}
