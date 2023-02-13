#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day starting from
 *              00:00 to 23:59
 *
 * Return: value of the last digit of n
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');

			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');

			m++;
		}
	}
}
