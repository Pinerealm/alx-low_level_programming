#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: print the opcodes of own main function
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	int idx, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (idx = 0; idx < n; idx++)
	{
		printf("%02hhx", ((char *)main)[idx]);
		if (idx < n - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
