#include "main.h"

int _strlen(char *s);

/**
 * _strncat - concatenates two strings using at most n bytes from src
 *
 * @dest: pointer to string to be concatenated to
 * @src: pointer to string to be addedd/concatenated
 * @n: number of bytes / characters to copy
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_d = _strlen(dest);
	int len_tot = n + len_d;
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
