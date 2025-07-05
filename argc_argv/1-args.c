#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: how many arguments were passed
 * @argv: string of arguments
 * Description: program that prints the number of arguments passed
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d", argc);
	printf("\n");
	return (0);
}
