#include "main.h"

/**
 * _isalpha - checks forletters, uppercase
 * and lowercase characters
 * @c: character to check
 * Return: 1 if 'c' is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
