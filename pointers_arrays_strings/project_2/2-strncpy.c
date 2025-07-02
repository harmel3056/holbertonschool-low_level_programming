#include "main.h"

/**
 * _strncpy - copies a string
 * @src: sting to be copied to dest
 * @dest: string to be copied to
 * @n: limiting variable
 *
 * Description: copies a string
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
