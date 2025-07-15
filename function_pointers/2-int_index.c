#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of ints
 * @size: number of elements in array
 * @cmp: pointer to function to be used to compare values
 *
 * Description: searches an array for an integer
 * Return: returns index of first element that matches int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size)
	{
		if (array[i] == cmp(int)

while loop to run through array[i] to up to int size
	cmp runs against each i and checks for match
