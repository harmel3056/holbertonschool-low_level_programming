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
	va_list list;
	int i = 0;
	int j = 0;
	int printed_one = 0;

	va_start(list, format);
		while (format != NULL && format[i] != '\0')
		{
			while (j < 4)
			{
				if (*ops[j].t == format[i])
				{
					if (printed_one == 1)
						printf(", ");

					ops[j].f[&list];
					printed_one = 1;
				}
				j++;
			}
			j = 0;
			i++;
		}
		va_end(list);
		printf("\n");
}

/**
 * print_char - prints a character
 * @list: va_list containing the character
 *
 * Return: void
 */

void print_char(va_list *list)
{
	char c;

	c = va_arg(*list, char);
	printf("%c", c);
}

/**
 * print_integer - prints an integer
 * @list: va_list containing the integer
 *
 * Return: void
 */

void print_integer(va_list *list)
{
	int i;

	i = va_arg(*list, int);
	printf("%i", i);
}

/**
 * print_float - prints a float
 * @list: va_list containing the float
 *
 * Return: void
 */

void print_float(va_list *list)
{
	float f;

	f = va_arg(*list, float);
	printf("%f", f);
}

/**
 * print_string - prints a string
 * @list: va_list containing the string
 *
 * Return: void
 */

void print_string(va_list *list)
{
	char *s;

	s = va_arg(*list, char *);
	printf("%s", s);
}
