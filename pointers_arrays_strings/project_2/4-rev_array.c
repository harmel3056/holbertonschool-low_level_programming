#include "main.h"

/**
 * reverse_array - reverses elements of an an array
 * @a: array to be reversed (variable 1)
 * @n: number of elements of the array (variable 2)
 *
 * Description: reverses elements of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
