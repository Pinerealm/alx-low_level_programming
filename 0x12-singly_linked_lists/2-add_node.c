#include "lists.h"

int _strlen(char *s);

/**
 * list_len - gets the no of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: string length (int)
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (s[cnt])
		cnt++;
	return (cnt);
}
