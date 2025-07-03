#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to search
 * @accept: bytes to look for in s
 *
 * Description: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * Return: as above
 */

unsigned int _strspn(char *s, char *accept)
{
	int length = 0;

	if (*accept == *s)
	{
		length = length + 1;
		accept++;
	}

	return (length);
}
