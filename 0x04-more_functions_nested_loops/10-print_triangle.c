#include "main.h"

/**
 * main - prints numbers 1-100: prints 'Fizz' if number is a multiple of 3,
 * Buzz if number is a multiple of 5, and FizzBuzz if a multiple of
 * both 3 and 5
 *
 * @size: size of the triangle
 *
 * Return: Always (0)
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}

			for (k = 1; k <= j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
