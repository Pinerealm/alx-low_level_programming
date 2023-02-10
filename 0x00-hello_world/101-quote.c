#include <unistd.h>

/**
 * main - Print a string to standard error
 *
 * Description: Do not use printf or puts or associated functions.
 * The string to be printed is: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 * followed by a new line.
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		60);
	return (1);
}
