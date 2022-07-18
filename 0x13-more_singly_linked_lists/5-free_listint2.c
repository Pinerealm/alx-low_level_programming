#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address to the head pointer of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
