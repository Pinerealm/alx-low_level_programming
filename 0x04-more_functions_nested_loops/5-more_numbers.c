#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 followed by a new line
 * 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');

			j++;
		}
		_putchar('\n');

		i++;
	}
}
