#include "main.h"

int elim_composite(int, int);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2 || (!(n % 2) && n != 2))
	{
		return (0);
	}
	else if (n == 3)
		return (1);

	return (elim_composite(n, 3));
}

/**
 * elim_composite - eliminates composite numbers
 * @x: integer to test against
 * @y: integer to test
 *
 * Return: 1 if only divisible by self, otherwise 0
 */

int elim_composite(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	else if (x / 2 > y)
	{
		return (elim_composite(y + 2, x));
	}
	else
	{
		return (1);
	}
}
