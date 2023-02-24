#include "main.h"
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number
 *
 * Return: natural square root of n or -1 if n has no natural square
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - finds the natural square root of a number
 * @n: number
 * @i: test number
 *
 * Return: natural square root of n or -1 if n has no natural square
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
