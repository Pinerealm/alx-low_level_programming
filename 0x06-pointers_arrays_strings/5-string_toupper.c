#include "main.h"

int _strlen(char *s);

/**
 * *string_toupper - changes lowercase letters of a string to uppercase
 *
 * @s: pointer to string
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int i, len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}

/**
 * _strlen - get string length
 * @s: pointer to string
 *
 * Return: dest
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (*(s + cnt) != '\0')
		cnt++;

	return (cnt);
}
