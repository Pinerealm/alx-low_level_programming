#include "main.h"

/**
 * more_numbers - prints 10 times, the numbers from 0 to 14
 */
void more_numbers(void)
{
	char i = 0, c;

	while (i < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');

			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
		i++;
	}
}
