#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at the index of a linked list
 * @head: pointer to a pointer to the first note of a linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if successful, -1 if unsuccessful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int index_count = 0;

	if (index == 0)
	{
		return (delete_head(head));
	}

	while (index_count != index)
	{
		if (current == NULL)
			return (-1);

		current = current->next;
		index_count++;
	}

	if (current == 0)
	{
		return (delete_tail(head));
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;

	free(current);

	return (1);
}

/**
 * delete_head - deletes first node of a linked list
 * @head: pointer to a pointer to the first node of a linked list
 *
 * Return: 1 if successful, -1 if unsuccessful
 */

int delete_head(dlistint_t **head)
{
	dlistint_t *current = *head;

	if (current->next == NULL)
	{
		free(current);
		return (1);
	}

	current->next->prev = *head;
	(*head) = current->next;

	free(current);

	return (1);
}

/**
 * delete_tail - deletes final node of a linked list
 * @head: pointer to a pointer to the first node of a linked list
 *
 * Return: 1 if successful, -1 if unsuccessful
 */

int delete_tail(dlistint_t **head)
{
	dlistint_t *current = *head;

	while (current != NULL)
		current = current->next;

	if (current->prev == NULL)
	{
		free(current);
		return (1);
	}

	current->prev->next = *head;
	*head = current->prev;

	free(current);

	return (1);
}
