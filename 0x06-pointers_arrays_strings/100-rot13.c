#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *s)
{
	int idx = 0, sdx;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[idx] != '\0')
	{
		sdx = 0;
		while (alpha[sdx] != '\0')
		{
			if (s[idx] == alpha[sdx])
			{
				s[idx] = rot13[sdx];
				break;
			}
			sdx++;
		}
		idx++;
	}

	return (s);
}
