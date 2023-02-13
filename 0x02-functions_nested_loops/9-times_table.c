#include "main.h"

/**
 * times_table - function that prints the 9 times table starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int row, col, res;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			res = (row * col);
			if (col == 0)
			{
				_putchar(res + '0');
			}
			else if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
