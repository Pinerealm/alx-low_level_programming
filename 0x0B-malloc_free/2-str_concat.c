#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - concatenates two strings in a newly allocated space
 * in memory
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the newly created array
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, len_s1, len_t, j = 0;

	s1 = (!s1) ? "" : s1;
	s2 = (!s2) ? "" : s2;

	len_s1 = _strlen(s1);
	len_t = len_s1 + _strlen(s2);
	ar = malloc(sizeof(char) * len_t + 1);
	if (ar == NULL)
		return ('\0');
	for (i = 0; i < len_s1; i++)
	{
		ar[i] = s1[i];
	}
	for ( ; i < len_t; i++)
	{
		ar[i] = s2[j++];
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
