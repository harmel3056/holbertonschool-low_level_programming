#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: points to the first node in the linked list
 * @index: index of the node, starting from 0
 *
 * Return: nth node of the list, or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count_index = 0;
	dlistint_t *current = head;

	while (count_index != index)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
		count_index++;
	}

	return (current);
}
