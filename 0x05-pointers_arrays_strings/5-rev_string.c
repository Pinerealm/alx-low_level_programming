#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int i = 0, idx = 0;
	char temp;

	while (s[idx] != '\0')
	{
		idx++;
	}
	while (i < idx)
	{
		temp = s[i];
		s[i] = s[--idx];
		s[idx] = temp;
		i++;
	}
}
