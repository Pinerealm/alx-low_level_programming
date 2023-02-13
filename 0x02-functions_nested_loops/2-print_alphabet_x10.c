#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 */
void print_alphabet_x10(void)
{
	char c;
	short i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
