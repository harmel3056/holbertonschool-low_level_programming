#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 chars
 *
 * Description: prints a chessboard from a 2D array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
