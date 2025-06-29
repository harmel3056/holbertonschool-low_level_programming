#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string value
 *
 * Description: print half of a string, plus newline
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0;
	int track;

	while (str[count] != '\0')
	{
		count = count + 1;
	}

	if (count % 2 == 1)
	{
		count = count + 1;
	}

	count = count / 2;

	for (track = count; str[track] != '\0'; track = track + 1)
	{
		_putchar(str[track]);
	}
	_putchar('\n');
}
