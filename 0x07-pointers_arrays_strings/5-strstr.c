#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int idx;
	char *loc = '\0';

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		idx = 0;
		if (*haystack == needle[idx])
		{
			loc = haystack;
			while (needle[idx])
			{
				if (needle[idx] != *haystack)
					break;
				idx++;
				haystack++;
			}
			if (needle[idx] == '\0')
				return (loc);
		}
		haystack++;
	}
	return ('\0');
}
