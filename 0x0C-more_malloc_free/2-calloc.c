#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, initialized to zero
 *
 * @nmemb: elements of the array
 * @size: size of each of the elements
 *
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrs;
	int i;

	if (!size || !nmemb)
		return ('\0');
	ptrs = malloc(size * nmemb);
	if (!ptrs)
		return ('\0');
	for (i = 0; i < (int)(size * nmemb); i++)
	{
		ptrs[i] = 0;
	}
	return ((void *)ptrs);
}
