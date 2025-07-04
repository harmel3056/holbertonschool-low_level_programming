#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 *
 * Description: returns the length of a string
 * Return: int length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
