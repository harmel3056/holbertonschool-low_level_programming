#include <stdio.h>

/**
 * main - prints name of array
 * @argv: array returning filename
 * @argc: how many arguments were passed
 * Description: program that prints its name + newline
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[0]);
	}
	printf("\n");
	return (0);
}
