#include "main.h"

/**
 * print_times_table - prints the given n times table
 *
 * @n: integer of the times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a = 0;
	int b, res;

	if (n < 0 || n > 15)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			res = a * b;
			if (b == 0)
				_putchar(res + '0');
			else if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res < 100)
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				_putchar(res / 100 + '0');
				_putchar((res - 100) / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
