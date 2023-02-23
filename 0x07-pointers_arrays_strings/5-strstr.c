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
	int idx = 0;
	char *loc;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == needle[idx])
		{
			loc = haystack;
			idx++;
			haystack++;
			while (needle[idx] && *haystack)
			{
				if (needle[idx] != *haystack)
					return ('\0');
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
