#include "main.h"

/**
 * print_diagonal - prints '\' with
 * increasing space increments
 * @n: number of times '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int row = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < n)
	{
		int i = 0;

		while (i < row)
		{
			_putchar(' ');
			i = i + 1;
		}
	_putchar('\\');
	_putchar('\n');
	row = row + 1;
	}
}
