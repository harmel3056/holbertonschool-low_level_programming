#include <stdio.h>
#include "3-calc.h"

/**
 * main - 
 * @
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int func;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	result = func(num1, num2);
	printf("%d", result);

		*get_op_func selects correct function to perform operation asked by user, using a char
		It calls back to op_functions.c, which contains the operations (such as a + b)
		`
