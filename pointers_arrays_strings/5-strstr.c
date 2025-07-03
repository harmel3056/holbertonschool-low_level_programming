#include "main.h"

/**
 * _strstr - finds a substring within a string
 * @haystack: string to search contents of
 * @needle: substring to search haystack for
 *
 * Description: finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes (\0) are not compared
 * Return: pointer to beginning of substring or NULL if it's N/A
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i + j]);
		}
	}
	return (0);
}
