#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be printed
 * Return: void
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

/**
 * print_rev - prints a string in reverse
 * @s: string input
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1; i >= '0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
