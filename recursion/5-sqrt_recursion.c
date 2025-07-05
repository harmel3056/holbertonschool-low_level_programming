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
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqr_calc(n, 1, n));
}

/**
 * _sqr_calc - returns the natural square root of a number
 * @n: number to test
 * @low: lowest denominator to test
 * @high: highest denominator to test
 *
 * Description: returns the natural square root of n, else returns -1
 * Return: see below
 */

int _sqr_calc(int n, int low, int high)
{
	int mid;
	int square;

	if (low > high)
	{
		return (-1);
	}

	mid = (low + (high - low) / 2);
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqr_calc(n, mid + 1, high));
	}
	else
	{
		return (_sqr_calc(n, low, mid - 1));
	}
}
