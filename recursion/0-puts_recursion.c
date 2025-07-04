#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to puts
 *
 * Description: prints a string, followed by a new line
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
