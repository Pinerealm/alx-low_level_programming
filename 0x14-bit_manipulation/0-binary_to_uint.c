#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: pointer to the binary string
 *
 * Return: the converted unsigned int, or 0 if the string is not valid or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	i = 0;
	j = sizeof(unsigned int) * 8;
	k = 0;
	while (b[i])
	{
		if (j > 0)
		{
			k = k << 1;
			if (b[i] == '1')
				k = k | 1;
			i++;
			j--;
		}
	}
	return (k);
}
