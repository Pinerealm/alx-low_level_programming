#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strdup(char *str);

/**
 * new_dog - creates a new dog_t variable
 *
 * @name: pointer to the dog name
 * @age: dog age
 * @owner: pointer to the dog owner
 *
 * Return: pointer to variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || !owner)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (NULL);
	}

	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;

	return (new);
}

/**
 * _strdup - copies a string to a newly allocated space in memory
 * @str: pointer to a string
 *
 * Return: pointer to newly created array
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len;

	if (!str)
		return (NULL);
	len = _strlen(str);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * _strlen - finds the length of a string
 * @s: pointer to a string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
