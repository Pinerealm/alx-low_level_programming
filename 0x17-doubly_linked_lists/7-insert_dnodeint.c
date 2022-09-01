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
	dlistint_t *new_node;
	dlistint_t *temp = *head;
	size_t node_len = print_dlistint(temp);

	if (index > node_len)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (index == 0)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}
	else
	{
		dlistint_t *current = *head;
		dlistint_t *prev = NULL;
		unsigned int j = 0;

		while (j < index)
		{
			prev = current;
			current = current->next;
			j++;
		}
		new_node->next = current;
		new_node->prev = prev;
		prev->next = new_node;
		current->prev = new_node;
		return (new_node);
	}
}
