#include "lists.h"

/**
 * reverse_listint - reverses a linked listint_t list
 * @head: address of the pointer to the list head
 *
 * Return: address of the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
