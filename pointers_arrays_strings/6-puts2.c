#include "main.h"

/**
 * puts2 - prints every second char in string
 * @str: string value
 *
 * Description: print every second character plus a newline
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
