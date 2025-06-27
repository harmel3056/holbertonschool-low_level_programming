#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: value to swap with b
 * @b: value to swap with a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
