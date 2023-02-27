#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string,
 * or NULL (if it fails or str is NULL)
 */
char *_strdup(char *str)
{
	char *new_str;
	int idx, len = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);

	for (idx = 0; idx < len; idx++)
		new_str[idx] = str[idx];
	new_str[idx] = '\0';

	return (new_str);
}
