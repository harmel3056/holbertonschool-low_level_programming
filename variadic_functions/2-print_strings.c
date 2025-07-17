#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings to be passed
 *
 * Description: prints strings using variadic function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *s;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strs, char *);

		if (s == NULL)
			printf("(nil)");

		else
			printf("%s", s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
