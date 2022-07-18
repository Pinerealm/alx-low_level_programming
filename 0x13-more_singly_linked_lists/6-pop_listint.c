#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 *		and returns the head node data
 * @head: address to the head pointer of the list
 *
 * Return: value of the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
