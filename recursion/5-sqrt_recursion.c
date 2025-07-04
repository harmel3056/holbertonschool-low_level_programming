#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number 
 * @n: number to test
 *
 * Description: returns the natural square root of n, else returns -1
 * Return: see below
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0)
	{
		return (1);
	}
	return ( _sqrt_recursion(n



int _pow_recursion(int n)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
