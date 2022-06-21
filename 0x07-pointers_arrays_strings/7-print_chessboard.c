#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: array containing character
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	char *p = &(*a)[8];

	for (i = 1; i <= 8; i++)
		_putchar(*(p - i));
	_putchar('\n');
	for (i = 0; i <= 8; i++)
		_putchar(*(p + i));
	_putchar('\n');
}
