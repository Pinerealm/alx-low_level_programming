#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: no of bytes to concatenate to s1 from s2
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int idx = 0, len_s1 = 0, len_s2 = 0;

	s1 = (!s1) ? "" : s1;
	s2 = (!s2) ? "" : s2;

	while (s2[len_s2])
		len_s2++;
	while (s1[len_s1])
		len_s1++;
	if (n >= len_s2)
		n = len_s2;

	new_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (!new_str)
		return (NULL);

	while (idx < len_s1)
	{
		new_str[idx] = s1[idx];
		idx++;
	}
	while (idx < len_s1 + n)
	{
		new_str[idx] = s2[idx - len_s1];
		idx++;
	}
	new_str[idx] = '\0';

	return (new_str);
}
