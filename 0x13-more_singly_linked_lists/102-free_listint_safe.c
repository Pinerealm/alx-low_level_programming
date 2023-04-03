#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list with or without a loop
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *prev = NULL;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;
	while (current)
	{
		prev = current;
		current = current->next;
		free(prev);
		size++;

		if (prev <= current)
			break;
	}
	*h = NULL;
	return (size);
}
