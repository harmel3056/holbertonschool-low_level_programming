#ifndef MAIN_H
#define MAIN_H

int (*get_op_func(char *s))(int, int);
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
