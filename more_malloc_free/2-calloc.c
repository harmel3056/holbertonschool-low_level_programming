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
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (ptr);
}
