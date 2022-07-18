#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
