#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' number of elements
 * of an array
 * @a: array
 * @n: number of elements to print
 *
 * Description: print 'n' number of elements
 * of an array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i = i + 1;
	}
	printf("\n");
}
