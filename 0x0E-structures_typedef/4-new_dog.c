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
	dog_t *adog;
	char *name_cp, *owner_cp;

	if (!name || !owner)
		return (NULL);

	adog = malloc(sizeof(*adog));
	if (!adog)
		return (NULL);

	name_cp = _strdup(name);
	if (!name_cp)
	{
		free(adog);
		return (NULL);
	}
	adog->name = name_cp;

	owner_cp = _strdup(owner);
	if (!owner_cp)
	{
		free(adog->name);
		free(adog);
		return (NULL);
	}
	adog->owner = owner_cp;
	adog->age = age;

	return (adog);
}

/**
 * _strdup - copies a string to a newly allocated space in memory
 * @str: pointer to a string
 *
 * Return: pointer to newly created array
 */

char *_strdup(char *str)
{
	char *ar;
	int i, len_s;

	if (!str)
		return ('\0');
	len_s = _strlen(str);
	ar = malloc(sizeof(char) * len_s + 1);
	if (ar == NULL)
		return ('\0');
	for (i = 0; i < len_s; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}

/**
 * _strlen - finds the length of a string
 * @s: pointer to a string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
		cnt++;

	return (cnt);
}
