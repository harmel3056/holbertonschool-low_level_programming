#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - runs get_op_func to return result of sum
 * @argc: number of arguments
 * @argv: array of string to be passed as arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (
		strcmp(argv[2], "+") != 0 &&
		strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "*") != 0 &&
		strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0 
	)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
