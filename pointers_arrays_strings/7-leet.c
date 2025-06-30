#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string to encrypt
 *
 * Description: takes a string and encodes it to 1337
 * Return: encrypted s string
 */

char *leet(char *s)
{
	char letters[] = "aeotl";
	char leet[] = "43071";
	int i;
	int j;

	while (s[i] <= '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
