#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints digits 1 to 98
 * @n: integer for incremental increase
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
	if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d, ", n);
	}
	n = n + 1;
	}
	printf("\n");
	}

	else
	{
	while (n >= 98)
	{
	if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d, ", n);
	}
	n = n - 1;
	}
	printf("\n");
	}
}
