#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number to check
 *
 * Description: Uses a helper function to determine whether a number
 * is a prime number. Returns 1 if the number is prime, 0 otherwise.
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - recursively checks for factors of a number
 * @n: the number to check
 * @i: the current divisor being tested
 *
 * Description: Used by is_prime_number to check if any number from 2
 * to sqrt(n) divides n evenly. Returns 0 if a factor is found, 1 if not.
 * Return: 1 if no divisors found (prime), 0 otherwise
 */

int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
