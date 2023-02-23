#include "main.h"

/**
 * _memset - fills the first n bytes of the address pointed to by s with b
 *
 * @s: pointer to memory area
 * @b: character to fill with
 * @n: no of bytes to fill
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
