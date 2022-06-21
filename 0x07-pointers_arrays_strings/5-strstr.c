#include "main.h"

/**
 * _strstr- finds the first occurrence of the substring needle in the string
 * haystack
 *
 * @haystack: pointer to a string
 * @needle: sunstring to find
 *
 * Return: first occurrence or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, match = 0, f_match;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == *needle)
		{
			f_match = i;
			while (needle[j] != '\0')
			{
				if (haystack[i] == needle[j])
				{
					match += 1;
				}
				else
					match = match;
				i++;
				j++;
			}
		}
		i++;
	}
	if (match == j)
		return (haystack + f_match);

	return ('\0');
}
