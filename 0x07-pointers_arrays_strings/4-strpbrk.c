#include "main.h"

/**
 * _strpbrk- locates the first occurrence in a string of any of the bytes in
 * another string
 *
 * @s: pointer to a string
 * @accept: characters to find
 *
 * Return: lowest location of any of the characters or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int loc, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				loc = (i <= loc) ? i : loc;
				break;
			}
		}
	}
	if (loc)
	{
		return (s + loc);
	}
	else
		return ('\0');
}
