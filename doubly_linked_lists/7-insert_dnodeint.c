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
	dlistint_t *new_node;
	unsigned int count_index = 0;

	if (idx == 0)
		return (insert_head(h, n));

	while (count_index != idx)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
		count_index++;
	}

	if (current == NULL)
		return (insert_tail(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = current->prev;
	new_node->next = current;

	if (current->prev != NULL)
		current->prev->next = new_node;
	else
		*h = new_node;

	current->prev = new_node;

	return (new_node);
}

/**
 * insert_head - helper function to handle malloc for index of zero
 * @h: pointer to pointer to the first node of the linked list
 * @n: data to input into the new node
 *
 * Return: new_node address
 */

dlistint_t *insert_head(dlistint_t **h, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *h;

	if (*h != NULL)
		(*h)->prev = new_node;

	*h = new_node;

	return (new_node);
}

/**
 * insert_tail - helper function to handle tail allocation on linked list
 * @h: pointer to pointer to the first node of the linked list
 * @n: data to input into the new node
 *
 * Return: new_node address
 */

dlistint_t *insert_tail(dlistint_t **h, int n)
{
	dlistint_t *new_node;
	dlistint_t *last = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (last->next != NULL)
		last = last->next;

	new_node->prev = last;

	last->next = new_node;

	return (new_node);
}
