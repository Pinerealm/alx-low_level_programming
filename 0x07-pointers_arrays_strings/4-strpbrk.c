#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Return: pointer to the first matching byte, or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int idx;

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*s == accept[idx])
				return (s);
		}
		s++;
	}
	return ('\0');
}
