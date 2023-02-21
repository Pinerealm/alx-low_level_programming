#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int idx = 0, sep_idx;
	char word_seps[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[idx++] -= 32;
	while (s[idx] != '\0')
	{
		sep_idx = 0;
		while (word_seps[sep_idx] != '\0')
		{
			if (s[idx] == word_seps[sep_idx] && s[idx + 1] >= 'a'
				&& s[idx + 1] <= 'z')
			{
				s[idx + 1] -= 32;
				idx++;
				break;
			}
			sep_idx++;
		}
		idx++;
	}

	return (s);
}
