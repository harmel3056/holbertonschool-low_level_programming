#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: pointer to the first node in a linked list
 *
 * Return: the sum of all data (n) passed through the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
