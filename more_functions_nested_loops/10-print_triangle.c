#include "main.h"

/**
 * print_triangle - prints '#' in a triangle shape
 * @size: number of columns and rows
 * Return: void
 */

void print_triangle(int size)
{
	int row = 0;
	int space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (row < size)
	{
		for (space = 0; space < size - row - 1; space = space + 1)
		{
			_putchar(' ');
		}
		for (hash = 0; hash <= row; hash = hash + 1)
		{
			_putchar('#');
		}
		_putchar('\n');
		row = row + 1;
	}
}
