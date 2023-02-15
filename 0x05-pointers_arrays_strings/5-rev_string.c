#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, flen, ilen = 0;
	char tmp;

	while (*(s + ilen) != '\0')
	{
		ilen++;
	}
	flen = ilen;
	ilen -= 1;

	for (i = 0; i < flen / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + ilen);
		*(s + ilen--) = tmp;
	}
}
