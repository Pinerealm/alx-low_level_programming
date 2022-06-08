#include "main.h"

/**
 * _islower - function that checks for a lowercase character
 * @c: character to be tested
 *
 * Return: 1 if lowercase; else 0
 */

int _islower(int c)
{
	char l;
	int res = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == c)
		{
			res = 1;
		}
	}
	return (res);
}
