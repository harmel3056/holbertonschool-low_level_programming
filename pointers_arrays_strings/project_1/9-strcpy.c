#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * to buffer pointed to by dest
 * @dest: points to buffer
 * @src: copies string
 *
 * Description: take a string and copy to buffer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
