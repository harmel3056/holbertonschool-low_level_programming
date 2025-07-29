#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list_node
{
	char *str;
	unsigned int len;
	struct list_node *next;
} list_t;


size_t print_list(const list_t *h);

#endif
