#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers on command line
 * @argv: array returning filename
 * @argc: how many arguments were passed
 * Description: multiplies two numbers on command line
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", (num1 * num2));

	return (0);
}
