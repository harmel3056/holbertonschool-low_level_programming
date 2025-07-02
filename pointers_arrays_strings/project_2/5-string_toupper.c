#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase using ASCII
 * @s: string to check
 *
 * Description: uses ASCII to convert lowercase to uppercase
 * Return: char *s outcome
 */

char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 97 && s[c] < 122)
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
