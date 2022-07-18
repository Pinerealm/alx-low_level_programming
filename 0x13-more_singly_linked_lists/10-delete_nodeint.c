#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 *
 * @head: address of the pointer to the list head
 * @idx: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (idx == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	for (i = 0; temp && i < idx; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	prev->next = temp->next;
	free(temp);

	return (1);
}
