#include <stdio.h>

/**
 * main - prints number of arguments passed to program
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
