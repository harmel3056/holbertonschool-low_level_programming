#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters passed
 * @n: number of arguments passed to the function
 *
 * Description: Uses variadic function to return sum of parameters entered
 * Return: sum of parameters entered
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ints;

	if (n == 0)
		return (0);

	va_start(ints, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ints, int);

	return (sum);
}

