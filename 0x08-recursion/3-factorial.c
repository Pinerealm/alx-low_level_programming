#include "main.h"

/**
 * factorial - returns the factorial of a number n
 * @n: a number
 *
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
