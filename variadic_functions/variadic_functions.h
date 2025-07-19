#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct print_op
{
	char *t;
	void (*f)(va_list *list);
} print_op_t;

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list *list);
void print_integer(va_list *list);
void print_float(va_list *list);
void print_string(va_list *list);

#endif
