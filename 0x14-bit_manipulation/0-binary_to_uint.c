#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: pointer to the binary string
 *
 * Return: the converted unsigned int, or 0 if the string is not valid or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, place = 1;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (--i; i >= 0; i--, place *= 2)
	{
		if (b[i] & 1)
			num += place;
	}

	return (num);
}
