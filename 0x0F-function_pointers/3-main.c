#include "3-calc.h"

/**
 * main - perform integer operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[1] && argv[3])
	{
		i = atoi(argv[1]);
		j = atoi(argv[3]);
		printf("%d\n", get_op_func(argv[2])(i, j));
	}

	return (0);
}
