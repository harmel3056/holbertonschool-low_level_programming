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
	int i = 0, len = 0;

	len = _strlen(str);
	while (i < len)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
