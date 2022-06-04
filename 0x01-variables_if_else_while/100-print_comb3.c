#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 1; n2 < 10; n2++)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');

				if (n1 == 8 && n2 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
