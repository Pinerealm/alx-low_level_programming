#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of the list
 *
 * @head: pointer to the head pointer of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (0);
}
