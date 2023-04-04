#include "main.h"

/**
 * binary_to_uint - converts a string of binary numbers to an unsigned int
 * @b: binary string
 *
 * Return: the converted number, or 0 if the string is NULL or invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, idx = 0;

	if (b == NULL)
		return (0);
	while (b[idx])
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
		num <<= 1;
		num += b[idx] - '0';
		idx++;
	}

	return (num);
}
