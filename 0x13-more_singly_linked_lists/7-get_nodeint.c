#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at a given index
 *
 * @head: head pointer of the list
 * @index: index of the node to get
 *
 * Return: address of the node at the given index, or NULL if not existing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
