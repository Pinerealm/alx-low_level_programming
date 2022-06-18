#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int no = n;

	if (n < 0)
	{
		_putchar('-');
		no *= -1;
	}

	if (no > 9)
	{
		print_number(no / 10);
	}
	_putchar(no % 10 + '0');
}
