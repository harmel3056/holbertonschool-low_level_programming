#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int to allocate
 *
 * Description: function allocates memory using malloc
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr =  malloc(b * sizeof(int));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
