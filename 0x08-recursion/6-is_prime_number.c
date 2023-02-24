#include "main.h"
int is_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: number
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - helper function for is_prime_number
 * @n: number
 * @i: iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}
