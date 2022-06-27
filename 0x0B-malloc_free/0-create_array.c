#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with
 * a specific character
 *
 * @size: size of the array to create
 * @c: character to initialize with
 *
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (!size)
		return ('\0');
	ar = malloc(sizeof(char) * size);
	for (i = 0; i < (int)size; i++)
	{
		ar[i] = c;
	}
	if (*ar != c)
		return ('\0');
	return (ar);
}
