#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t l_idx = 0;
	const listint_t *tmp = head, *prev;

	if (head == NULL)
		return (0);
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		prev = tmp;
		tmp = tmp->next;
		l_idx++;

		if (prev <= tmp || tmp == head)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}

	}
	return (l_idx);
}
