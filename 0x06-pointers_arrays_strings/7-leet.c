#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to modify
 *
 * Description: Replaces letters with numbers. a/A = 4, e/E = 3, o/O = 0, 
 * t/T = 7, l/L = 1
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	int idx = 0, ldx;
	char *leet = "aeotl", *leet_num = "43071";

	while (s[idx] != '\0')
	{
		ldx = 0;
		while (leet[ldx] != '\0')
		{
			if (s[idx] == leet[ldx] || s[idx] == leet[ldx] - 32)
				s[idx] = leet_num[ldx];
			ldx++;
		}
		idx++;
	}

	return (s);
}
