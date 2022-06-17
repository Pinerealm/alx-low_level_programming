#include "main.h"

int _strlen(char *s);

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if equal, a negative no if less than, a positive no otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i, len_s1 = _strlen(s1);

	for (i = 0; i < len_s1; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
			return (s1[i] - s2[i]);
	}
	return (0);
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
