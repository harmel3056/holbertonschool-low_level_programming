#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string value
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
