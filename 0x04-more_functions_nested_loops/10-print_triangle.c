#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i = 0, spaces, hashes;

	while (i < size)
	{
		spaces = size - i - 1;
		hashes = i + 1;

		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		while (hashes > 0)
		{
			_putchar('#');
			hashes--;
		}

		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
