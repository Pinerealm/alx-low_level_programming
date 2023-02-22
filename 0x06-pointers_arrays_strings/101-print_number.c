#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int n_copy, dig_len = 0, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	n_copy = n;
	while (n_copy > 0)
	{
		n_copy /= 10;
		dig_len++;
	}
	while (dig_len > 1)
	{
		divisor *= 10;
		dig_len--;
	}
	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
