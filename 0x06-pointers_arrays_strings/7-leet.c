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
	char cipher[] = "aeotl";
	char repl[] = "43071";
	int l, c;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (l = 0; cipher[l] != '\0'; l++)
		{
			if (s[c] == cipher[l] || s[c] == (cipher[l] - 32))
				s[c] = repl[l];
		}
	}
	return (s);
}
