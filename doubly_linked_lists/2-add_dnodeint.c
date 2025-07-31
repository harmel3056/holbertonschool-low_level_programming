#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the beginning of the list
 * @n: const int data to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *orig_head = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = orig_head;
		orig_head->prev = new_node;
	}

	else if (head == NULL)
		new_node->next = NULL;

	*head = new_node;

	return (new_node);
}

/**
 * reserved some memory for new node, thereby making the new node
 * checked if malloc fails it'll just return null
 * SHOULD I FREE HERE?
 * set the current 'head' prev pointer to point to new node
 * gave new node data from the input
 * set new node prev pointer to NULL
 * set new node 'next' pointer to the current 'head' node
 * set current 'head' node's prev pointer to the new node
 * assigned new node as the new 'head' node
 */
