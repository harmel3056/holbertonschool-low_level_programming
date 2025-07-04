#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: number of rows and columns
 *
 * Description: prints sums of two diagonals
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size - 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
