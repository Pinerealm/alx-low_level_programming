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
	int sum = 2772, n;

	srand(time(NULL));
	while (sum > 126)
	{
		n = rand() % 94 + 33;
		printf("%c", n);
		sum -= n;
	}

	printf("%c", sum);

	return (0);
}

