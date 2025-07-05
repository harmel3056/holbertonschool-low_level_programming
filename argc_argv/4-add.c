#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argv: array returning filename
 * @argc: how many arguments were passed
 * Description: adds positive numbers
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int num = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]) && (argv[i][j] != '+'))
			{
				printf("Error\n");
				return (1);
			}
		}

		num += atoi(argv[i]);
	}
	printf("%d\n", num);
	return (0);
}
