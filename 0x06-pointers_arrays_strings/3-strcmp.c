#include "main.h"

int _strlen(char *s);

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if equal: a negative no if s1 < s2: otherwise a positive no
 */

int _strcmp(char *s1, char *s2)
{
	int i, len_s1 = _strlen(s1);

	for (i = 0; i < len_s1; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _strlen - get string length
 * @s: pointer to string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (*(s + cnt) != '\0')
		cnt++;

	return (cnt);
}
