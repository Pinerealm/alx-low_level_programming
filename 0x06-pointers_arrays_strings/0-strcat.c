#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int idx = 0, jdx = 0;

	while (dest[idx] != '\0')
		idx++;
	while (src[jdx] != '\0')
		dest[idx++] = src[jdx++];
	dest[idx] = '\0';

	return (dest);
}
