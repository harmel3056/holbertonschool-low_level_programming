#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet TEN TIMES
 * in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int number = 1;

	while (number <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
	_putchar('\n');
	number++;
	}
}
