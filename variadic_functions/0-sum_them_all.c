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
	int i;

	va_list ints;
	va_start(ints, n);
	
	for (i = 0; i < n; i++)
		+= ints
