#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: character
 *
 * Description: Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * Return: as above
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
