#include <stdio.h>

/**
 * main - prints all arguments received
 * @argv: array returning filename
 * @argc: how many arguments were passed
 * Description: program that prints the arguments received
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
