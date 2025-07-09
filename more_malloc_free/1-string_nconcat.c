#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes to copy from s2
 *
 * Description: concatenates two strings, returns NULL for failure
 * Return: pointer in newly allocated space, containing s1 and s2[n]
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length1, length2;
	char *ptr;

	if (s1 == NULL)
		s1  = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0' && length2 < n)
		length2++;

	ptr = malloc((length1 + length2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < length1)
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < length2)
	{
		ptr[i + j] = s2[j];
		j++;
	}

	ptr[i + j] = '\0';

	return (ptr);
}
