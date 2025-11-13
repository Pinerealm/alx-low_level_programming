#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
