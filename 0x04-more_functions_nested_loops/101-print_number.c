#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int num = n, divisor = 1, digits = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
	}
	/* Get the no of digits in n */
	while (num > 0)
	{
		num /= 10;
		digits++;
	}
	/* Get the divisor */
	while (digits > 1)
	{
		divisor *= 10;
		digits--;
	}
	/* Print each digit of the number */
	while (divisor > 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
