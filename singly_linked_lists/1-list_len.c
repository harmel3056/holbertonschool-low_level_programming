#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the list_t elements
 *
 * Return: number of elements counted
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != 0)
	{
		current = current->next;
		count++;
	}

	return (count);
}
