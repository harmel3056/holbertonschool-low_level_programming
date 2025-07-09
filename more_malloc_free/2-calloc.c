#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of of elements to be allocated
 * @size: size of each byte to be allocated
 *
 * Description: allocates memory for an array using malloc
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (int *) malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
