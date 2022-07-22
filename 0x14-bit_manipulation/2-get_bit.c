#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to check
 * @index: index of the bit to check
 *
 * Return: the value of the bit at given index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
