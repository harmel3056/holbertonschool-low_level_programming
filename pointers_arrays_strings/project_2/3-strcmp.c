#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 *
 * Description: Compares two strings and returns 0
 * if the same, negative value for s1<s2, positive for s1>s2
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
