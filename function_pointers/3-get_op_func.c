#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * to perform operation asked by user
 * @s: the operator passed as argument to program (+ - / etc)
 *
 * Description: selects function that corresponds to operator
 * Return: pointer to the function corresponding to
 * the operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
