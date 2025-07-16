#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts an integer from another integer
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides an integer
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of modulus
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
