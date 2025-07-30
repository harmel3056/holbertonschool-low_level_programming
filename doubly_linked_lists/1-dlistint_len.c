#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the first node in the list
 *
 * Return: the number of elements(nodes) in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
