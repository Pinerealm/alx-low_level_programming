#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at a given index
 * @head: double pointer to the list head
 * @index: index of the node to get
 *
 * Return: address of the node at the given index, or NULL if not existing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
