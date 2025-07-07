#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array based on size and char
* @size: size of the array
* @c: character to be used in the array
*
* Description: creates an array of chars, and initialized with char c
* Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
