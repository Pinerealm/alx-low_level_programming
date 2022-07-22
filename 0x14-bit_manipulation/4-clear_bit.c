#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index to 0
 *
 * @n: pointer to the number to check
 * @index: index of the bit to set
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
