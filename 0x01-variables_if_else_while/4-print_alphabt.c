#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except 'q'and 'e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');

	return (0);
}
