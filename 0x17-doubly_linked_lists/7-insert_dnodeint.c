#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head pointer of the list
 * @idx: index of the new node
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node_len = 0, j = 0;
	dlistint_t *new, *tmp = *h;
	dlistint_t *current = *h;
	dlistint_t *prev = NULL;

	while (tmp) /* Find list length */
	{
		node_len++;
		tmp = tmp->next;
	}
	if (idx > node_len || !h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == node_len)
		return (add_dnodeint_end(h, n));

	while (j < idx)
	{
		prev = current;
		current = current->next;
		j++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current;
	new->prev = prev;
	prev->next = new;
	current->prev = new;

	return (new);
}
