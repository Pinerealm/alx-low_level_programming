#include "lists.h"

/**
 * sum_dlistint - sums the values of all the data in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the values in the list
 */
int sum_dlistint(const dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
