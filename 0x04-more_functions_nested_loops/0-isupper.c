#include "main.h"

/**
 * _isupper - function that checks for an uppercase character of the alphabet
 * @c: return char type
 *
 * Return: return 0 on success and 1 on fail
 */

int _isupper(int c)
{
	char L;
	int res = 0;

	for (L = 'A'; L <= 'Z'; L++)
	{
		if (c == L)
		{
			res = 1;
		}
	}
	return (res);
}
