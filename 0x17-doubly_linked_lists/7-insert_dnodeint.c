#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head pointer of the list
 * @index: index of the new node
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index,
					int n)
{
	unsigned int node_len, j = 0;
	dlistint_t *new;
	dlistint_t *current = *head;
	dlistint_t *prev = *head;

	while (prev) /* Find list length */
	{
		node_len++;
		prev = prev->next;
	}
	if (index > node_len)
		return (NULL);
	if (index == 0)
		return (add_dnodeint(head, n));
	if (index == node_len)
		return (add_dnodeint_end(head, n));

	while (j < index)
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
