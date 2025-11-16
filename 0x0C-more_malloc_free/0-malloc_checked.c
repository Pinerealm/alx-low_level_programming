#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exits if fail
 * @b: no of memory bytes
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	else
		return (p);
}
