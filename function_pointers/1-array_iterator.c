#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  executes a function on each element of an array
 * @array: pointer to array to execute function upon
 * @size: size of the array
 * @action: pointer to function being used
 *
 * Description: uses a callback to use a function on elements of an array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

