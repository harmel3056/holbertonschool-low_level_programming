#include "main.h"

/**
 * print_line - prints lines based on value
 * @n: number of '_' entered per line
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		_putchar('_');
		i = i + 1;
	}
	_putchar('\n');
}
