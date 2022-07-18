#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
