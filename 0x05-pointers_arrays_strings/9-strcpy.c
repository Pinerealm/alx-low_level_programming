#include "main.h"

int _strlen(char *s);

/**
* _strcpy - Copy paste string
*
* @dest: pointer to copied string
* @src: pointer to string to be copied
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
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
