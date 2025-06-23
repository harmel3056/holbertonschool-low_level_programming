#include "main.h"

/**
 * times_table - prints a table of multiplications
 * up to factor of 9
 * @a - column value, @b - row value
 * Return: void
 */

void times_table(void)
{
	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		a = 0;
		while (a <= 9)
		{
		int result = b * a;

		if (a != 0)
		{
			_putchar(',');
			if (result > 10)
			{
				_putchar(' ');
			}
			_putchar(' ');
		}
		if (result >= 10)
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		else
		{
			_putchar(result + '0');
		}
		a = a + 1;
		}
		_putchar('\n');
		b = b + 1;
	}
}
