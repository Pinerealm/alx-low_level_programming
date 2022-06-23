#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - apply the _sqrt function with i equals 1
 * @n: number
 *
 * Return: natural square root of n, -1 if not natural 
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the natural square root of a number
 * @n: number to calculate from
 * @i: test no
 *
 * Return: natural square root of n, -1 if not natural 
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, ++i));
}
