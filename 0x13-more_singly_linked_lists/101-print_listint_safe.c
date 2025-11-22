#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t l_idx = 0, ptr_idx;
	const listint_t *tmp = head, *ptr_arr[1024];

	if (head == NULL)
		return (0);
	while (tmp)
	{
		if (l_idx >= 1024)
			exit(98);
		ptr_arr[l_idx] = tmp;
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		l_idx++;

		for (ptr_idx = 0; ptr_idx < l_idx; ptr_idx++)
		{
			if (tmp == ptr_arr[ptr_idx])
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (l_idx);
			}
		}
	}
	return (l_idx);
}
