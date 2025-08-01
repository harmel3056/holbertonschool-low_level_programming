#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;

/* =============================== */
    /* 1. Insert into a list with 2 elements */
    /* =============================== */
    printf("Test 1: Insert in list of 2 elements\n");
    head = NULL;
    add_dnodeint_end(&head, 10);
    add_dnodeint_end(&head, 20);
    print_dlistint(head);
    insert_dnodeint_at_index(&head, 1, 15);  /* insert in the middle */
    print_dlistint(head);
    free_dlistint(head);

    /* =============================== */
    /* 2. Insert into a list with >2 elements */
    /* =============================== */
    printf("Test 2: Insert in list of >2 elements\n");
    head = NULL;
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    print_dlistint(head);
    insert_dnodeint_at_index(&head, 2, 99);  /* insert in the middle */
    print_dlistint(head);
    free_dlistint(head);

    /* =============================== */
    /* 3. Insert into list with negative values */
    /* =============================== */
    printf("Test 3: Insert in list with negative values\n");
    head = NULL;
    add_dnodeint_end(&head, -10);
    add_dnodeint_end(&head, -20);
    add_dnodeint_end(&head, -30);
    print_dlistint(head);
    insert_dnodeint_at_index(&head, 1, -15);  /* insert between -10 and -20 */
    print_dlistint(head);
    free_dlistint(head);

    /* =============================== */
    /* 4. Insert into an empty list */
    /* =============================== */
    printf("Test 4: Insert into an empty list\n");
    head = NULL;
    insert_dnodeint_at_index(&head, 0, 42);  /* should create new list with 1 node */
    print_dlistint(head);
    free_dlistint(head);

    return (EXIT_SUCCESS);
}
