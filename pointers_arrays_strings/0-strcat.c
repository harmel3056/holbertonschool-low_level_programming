#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: sting to be added to dest
 * @dest: string to have src appended to its end
 *
 * Description: concatenates two strings
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
