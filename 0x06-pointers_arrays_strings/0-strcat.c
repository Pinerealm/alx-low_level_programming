#include "main.h"

int _strlen(char *s);

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to string to be concatenated to
 * @src: pointer to string to be addedd/concatenated
 *
 * Return: pointer to final str
 */

char *_strcat(char *dest, char *src)
{
	int i, len_d = _strlen(dest);
	int len_tot = _strlen(src) + len_d;
	int j = 0;

	for (i = len_d; i < len_tot; i++)
	{
		dest[i] = src[j++];
	}
	return (dest);
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
