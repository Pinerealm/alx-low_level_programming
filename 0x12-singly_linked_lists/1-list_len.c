#include "lists.h"

/**
 * list_len - gets the no of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
