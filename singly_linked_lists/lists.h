#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_node - singly linked list node
 * @str: string
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: Structure for a node in a singly linked list,
 * used for storing strings and their lengths
 */

typedef struct list_node
{
	char *str;
	unsigned int len;
	struct list_node *next;
} list_t;


size_t print_list(const list_t *h);

#endif
