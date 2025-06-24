#include "main.h"

/**
 * more_numbers - prints 0 to 14 10x
 * Return: void
 */

void more_numbers(void)
{
	int n = 0;
	int r = 0;

	while (r < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
			_putchar(n + '0');
			}
		n = n + 1;
		}
	_putchar('\n');
	r = r + 1;
	}
}
