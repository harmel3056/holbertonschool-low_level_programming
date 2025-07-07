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
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	ptr = malloc((length + 1) * sizeof(char));

	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
