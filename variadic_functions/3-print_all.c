#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments you can pass to function
 *
 * Description: prints arguments allowed by format list
 * Return: void
 */

void print_all(const char * const format, ...)
{
	 op_t ops[] = {
        {"c", print_char},
        {"i", print_integer},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
    };











void print_char(va_list *list)
{
	char c;
	c = va_arg(*list, char);
	printf("%c", c);
}

void print_integer(va_list *list)
{
	int i;
	i = va_arg(*list, int);
	printf("%i", i);
}

void print_float(va_list *list)
{
	float f;
	f = va_arg(*list, float);
	printf(%f, f);
}

void print_string(va_list *list)
{
	char *s;
	s = va_arg(*list, char *);
	printf(%s, s);
}
