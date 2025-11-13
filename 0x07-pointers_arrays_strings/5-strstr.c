#include <stddef.h>

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

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		idx = 0;
		while (needle[idx] && haystack[idx] == needle[idx])
			idx++;

		if (!needle[idx])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
