#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Description: Checks the initial segment of s which consists entirely of
 * bytes in accept
 * Return: no of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int idx, len = 0;

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*s == accept[idx])
			{
				len++;
				break;
			}
		}
		if (!accept[idx])
			break;
		s++;
	}
	return (len);
}
