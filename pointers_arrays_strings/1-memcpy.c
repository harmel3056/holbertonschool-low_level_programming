#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes to copy across
 *
 * Description: copies n bytes from memory area src to memory area dest
 * Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
