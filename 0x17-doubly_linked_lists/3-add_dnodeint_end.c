#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @n: data to be added to the new node
 *
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (temp == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp)
	{
		if (temp->next == NULL)
		{
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp = temp->next;
	}
	return (new_node);
}
