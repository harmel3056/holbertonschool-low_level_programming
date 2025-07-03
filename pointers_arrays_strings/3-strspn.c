#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to search, counter i
 * @accept: bytes to look for in s, counter b
 *
 * Description: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * Return: as above
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b;
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[i] == accept[b])
			{
				break;
			}
		}
		if (accept[b] == '\0')
		{
			break;
		}
	}
	return (i);
}
