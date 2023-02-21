#include "main.h"

int _strlen(char *s);

/**
 * *cap_string - capitalises the first letter of all the words of a string
 *
 * @str: pointer to string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	char punct[] = "\t\n,;.!?\"(){}";
	int i, sep, len_s = _strlen(str);
	int len_p = _strlen(punct);

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;

	for (i = 1; i < len_s; i++)
	{
		if (str[i] == ' ' && str[i + 1] >= 97 && str[i + 1] <= 122)
			str[i + 1] -= 32;
		for (sep = 0; sep < len_p; sep++)
		{
			if (str[i] != punct[sep])
				continue;
			else
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
		}
	}
	return (str);
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
