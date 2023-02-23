#include "main.h"

/**
 * _strchr- finds first occurrence of char c in string s
 *
 * @s: pointer to string
 * @c: source memory area
 *
 * Return: pointer to first occurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
