#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: generates random valid passwords for the program 101-crackme
 * Return: Always 0 (on success)
 */
int main(void)
{
	int sum, n;

	srand(time(NULL));
	sum = 2772;
	while (sum > 125)
	{
		n = rand() % 78 + '0';
		if (isprint(n))
		{
			printf("%c", n);
			sum -= n;
		}
	}
	printf("%c", sum);
	return (0);
}
