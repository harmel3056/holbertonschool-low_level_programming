#include "main.h"

/**
 * print_square - prints '#' to create square
 * @size: number of columns and rows
 * Return: void
 */

void print_square(int size)
{
	int row = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (row < size)
	{
		int col = 0;

		while (col < size)
		{
			_putchar('#');
			col = col + 1;
		}
	_putchar('\n');
	row = row + 1;
	}
}
