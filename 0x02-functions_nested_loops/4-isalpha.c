#include "main.h"

/**
 * _isalpha - function that checks for an alphabetic character
 * @c: character to be tested
 *
 * Return: 1 if a letter (lower or uppercase); else 0
 */

int _isalpha(int c)
{
	char l, L;
	int res = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
		{
			res = 1;
		}
	}
	for (L = 'A'; L <= 'Z'; L++)
	{
		if (c == L)
		{
			res = 1;
		}
	}

	return (res);
}
