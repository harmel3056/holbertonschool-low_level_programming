#include "main.h"

/**
 * factorial - returns the factorial
 * @n: number to return factorial of
 *
 * Description: returns the factorial of number n
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
