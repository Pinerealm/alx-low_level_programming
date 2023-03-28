#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @idx: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (idx == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (i == idx)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
