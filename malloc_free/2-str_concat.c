#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings with malloc
* @s1: string 1
* @s2: string 2
*
* Description: concatenates two strings, s1 and then s1
* Return: pointer to a new string inc s1, s2, \0
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, length1, length2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	ptr = malloc((length1 + length2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';

	return (ptr);
}
