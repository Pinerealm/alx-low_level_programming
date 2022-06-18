#include "main.h"

int _strlen(char *s);

/**
 * *leet - encodes a string: replaces certain letters with numbers
 * @s: pointer to a string
 *
 * Return: s
 */

char *leet(char *s)
{
	char cipher[] = "aeotlAEOTL";
	char repl[] = "4307143071";
	int len_ci = _strlen(cipher);
	int l, c = 0;

	while (*(s + c) != '\0')
	{
		for (l = 0; l < len_ci; l++)
		{
			if (*(s + c) == cipher[l])
				*(s + c) = repl[l];
		}
		c++;
	}
	return (s);
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
