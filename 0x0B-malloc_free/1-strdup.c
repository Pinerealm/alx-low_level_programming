#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

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
