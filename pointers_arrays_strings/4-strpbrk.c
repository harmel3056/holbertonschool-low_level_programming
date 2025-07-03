#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string to search, counter i
 * @accept: bytes to look for in s, counter b
 *
 * Description: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 * Return: as above
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int b;
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[i] == accept[b])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
