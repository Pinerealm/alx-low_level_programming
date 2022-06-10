#include "main.h"

/**
 * _isdigit - function that checks for an uppercase character of the alphabet
 * @c: return char type
 *
 * Return: return 0 on success and 1 on fail
 */

int _isdigit(int c)
{
	char d;
	int res = 0;

	for (d = '0'; d <= '9'; d++)
	{
		if (c == d)
		{
			res = 1;
		}
	}
	return (res);
}
