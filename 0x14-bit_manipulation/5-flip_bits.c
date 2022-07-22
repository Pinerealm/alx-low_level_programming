#include "main.h"

/**
 * flip_bits - calculates the needed number of bit flips to get from
 * one number to another
 *
 * @n: number to be flipped
 * @m: number after flipping
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, cnt = 0;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & 1) != (m & 1))
			cnt++;
		n >>= 1;
		m >>= 1;
	}
	return (cnt);
}
