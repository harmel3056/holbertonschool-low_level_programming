#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns pointer to a copy of a string
* @str: string to copy
*
* Description: returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* Return: pointer to the new string
*/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(strlen(str) + 1);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
