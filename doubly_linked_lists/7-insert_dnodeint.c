#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the first node in the linked list
 * @idx: index of the list where new node should be added
 * @n: data (integer) within the node
 *
 * Return: address of the new node, or null if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *previous;
	dlistint_t new_node;
	unsigned int count_index = 0;

	while (count_index != idx)
	{
		if (current != h)
			previous = current->prev;

		current = current->next;
		count_index++;
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current->prev;
	current->prev = new_node;
	previous->next = new_node;
	new_node->next = current;

	return (new_node);
}
