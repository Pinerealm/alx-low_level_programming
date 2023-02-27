#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific character
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL (if it fails or size is 0)
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	while (size--)
		array[size] = c;

	return (array);
}
