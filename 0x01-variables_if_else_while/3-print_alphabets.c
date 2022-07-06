#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase followed by a
 *        new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l, L;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);

	putchar('\n');

	return (0);
}
