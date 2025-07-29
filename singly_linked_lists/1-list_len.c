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
	const list_t *current = h; //This guy - work out type 

	while (current != 0)
	{
		current = current->next;
		count++;
	}

	return (count);
}

/**
 * list_t list most likely refers to a struct, so you need to set the struct bounds
 * struct(node) would include the input data(str), length count(len), a pointer to next node(next)
 *
 * return will be a count, so you must count the elements, which requires a loop(while?)
 * while loop should terminate at a NULL, as that is the indicator for the end of the linked list
 *
 * No special requests for NULL returns or the like, no printf either
 *
 * return (count) 
 */

