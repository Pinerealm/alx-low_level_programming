#include "main.h"

int _strlen(char *s);

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to string to copy to
 * @src: pointer to string to be copies
 * @n: number of bytes / characters to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
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
