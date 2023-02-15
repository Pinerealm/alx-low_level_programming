#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to a string
 *
 * Return: string length (int)
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
		cnt++;

	return (cnt);
}
