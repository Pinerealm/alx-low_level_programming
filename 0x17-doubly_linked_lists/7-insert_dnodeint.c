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
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (!current)
		return (NULL);
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = current;
	new->next = current->next;
	if (current->next)
		current->next->prev = new;
	current->next = new;

	return (new);
}
