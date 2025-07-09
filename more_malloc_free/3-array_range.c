#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: beginning of array
 * @max: end of array
 *
 * Description: Creates an array of integers from min to max
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
