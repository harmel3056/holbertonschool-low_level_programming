#include "main.h"

/**
 * _strncat - concatenates two strings to power of n
 * @src: sting to be added to dest
 * @dest: string to have src appended to its end
 * @n: limiting variable
 *
 * Description: concatenates two strings, second limited by n
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j <= n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
