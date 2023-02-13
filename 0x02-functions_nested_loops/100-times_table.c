#include "main.h"

void print_product(int a, int b);
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: starting number
 *
 * Condition: if n is greater than 15 or less than 0, the function will
 * not print anything
 */
void print_times_table(int n)
{
	int i = 0, j;

	if (n > 15 || n < 0)
		return;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			print_product(i, j);
			if (j == n)
				break;
			if (i * (j + 1) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (i * (j + 1) < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}

/**
 * print_product - print the products of the multiplication table
 * @a: The first integer
 * @b: The second integer
 */
void print_product(int a, int b)
{
	int product = a * b;

	if (product < 10)
		_putchar(product + '0');
	else if (product < 100)
	{
		_putchar(product / 10 + '0');
		_putchar(product % 10 + '0');
	}
	else
	{
		_putchar(product / 100 + '0');
		_putchar((product / 10) % 10 + '0');
		_putchar(product % 10 + '0');
	}
}
