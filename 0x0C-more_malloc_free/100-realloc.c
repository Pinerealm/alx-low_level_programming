#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: address of the old pointer
 * @old_size: size of the previous array
 * @new_size: size of the new array
 *
 * Return: pointer to the reallocated block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *tmp_ptr;
	int i, less_size = (new_size < old_size) ? new_size : old_size;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size * sizeof(*new_ptr));
		return ((void *)new_ptr);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
		tmp_ptr = ptr;

	new_ptr = malloc(new_size * sizeof(*new_ptr));
	if (!new_ptr)
		return (NULL);
	for (i = 0; i < less_size; i++)
		new_ptr[i] = tmp_ptr[i];
	free(ptr);

	return ((void *)new_ptr);
}
