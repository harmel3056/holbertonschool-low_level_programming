#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using callback function
 * @name: name to print, it's a string
 * @f: pointer to function that takes a char * and returns void
 *
 * Description: calls pointer function @f with @name as argument
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
