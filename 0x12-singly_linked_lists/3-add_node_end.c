#include "lists.h"
int _strlen(const char *s);

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

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
	while (temp->next)
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
int _strlen(const char *s)
{
	int cnt = 0;

	while (s[cnt])
		cnt++;
	return (cnt);
}
