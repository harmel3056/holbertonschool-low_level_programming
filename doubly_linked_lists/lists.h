#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
int delete_head(dlistint_t **head);
int delete_tail(dlistint_t **head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *insert_head(dlistint_t **h, int n);
dlistint_t *insert_tail(dlistint_t **h, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int sum_dlistint(dlistint_t *head);
size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);
void free_dlistint(dlistint_t *head);

#endif
