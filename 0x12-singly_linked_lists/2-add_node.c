#include "lists.h"
int _strlen(const char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;

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
