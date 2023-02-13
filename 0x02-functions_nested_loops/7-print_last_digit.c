#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: digit to perform operation on
 *
 * Return: value of the last digit of n
 */

int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (l_digit < 0)
	{
		l_digit *= -1;
	}
	_putchar(l_digit + '0');

	return (l_digit);
}
