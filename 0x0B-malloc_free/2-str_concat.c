#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string,
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int idx = 0, idx2 = 0, len = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[idx++])
		len++;
	while (s2[idx2++])
		len++;

	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	idx = 0;
	while (*s1)
		new_str[idx++] = *s1++;
	while (*s2)
		new_str[idx++] = *s2++;
	new_str[idx] = '\0';

	return (new_str);
}
