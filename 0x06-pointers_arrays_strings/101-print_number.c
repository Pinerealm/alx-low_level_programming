#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int num, divisor = 1, temp;

	if (n < 0)
	{
		_putchar('-');
		num = -((unsigned int)n);
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	temp = num;
	while (temp / 10 > 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		_putchar((num / divisor) % 10 + '0');
		divisor /= 10;
	}
}
