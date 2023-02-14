#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to draw line
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i > 0 && i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
