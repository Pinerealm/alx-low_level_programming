#include "main.h"

/**
 * _strspn- calculates no of contiguous bytes in the initial segment of 's'
 * which contain only characters from 'accept'
 *
 * @s: pointer to a string
 * @accept: source memory area
 *
 * Return: no of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int span = 0, i, j, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				span++;
				found = 1;
				break;
			}
			else
				found = 0;
		}
		if (found)
			continue;
		else
			break;
	}
	return (span);
}
