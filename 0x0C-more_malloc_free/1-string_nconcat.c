#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: no of bytes to concatenate to s1 from s2
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_n;
	unsigned int i, j, len_s1, len_s2, len_tot;

	s1 = (!s1) ? "" : s1;
	s2 = (!s2) ? "" : s2;
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n >= len_s2)
		len_tot = len_s1 + len_s2;
	else
		len_tot = len_s1 + n;

	str_n = malloc(sizeof(*str_n) * (len_tot + 1));
	if (!str_n)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		str_n[i] = s1[i];
	for (j = 0; i < len_tot; i++)
		str_n[i] = s2[j++];

	str_n[i] = '\0';
	return (str_n);
}

/**
* _strlen - get string length
* @s: pointer to string
*
* Return: dest
*/

int _strlen(char *s)
{
	int cnt = 0;

	while (*(s + cnt) != '\0')
		cnt++;

	return (cnt);
}
