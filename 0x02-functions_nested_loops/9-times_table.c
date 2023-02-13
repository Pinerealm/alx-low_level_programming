#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	short i = 0, j, product;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = i * j;
			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (j == 9)
				break;
			if (i * (j + 1) < 10)
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
		_putchar('\n');
		i++;
	}
}
