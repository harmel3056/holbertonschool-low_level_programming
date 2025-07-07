#include "main.h"
#include <stdio.h>

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
	if (size == 0)
	{
		return (NULL);
	}

	char *ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	unsigned int i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
