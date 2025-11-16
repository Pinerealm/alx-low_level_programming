#include <stdlib.h>
void *_memcpy(void *dest, void *src, unsigned int n);

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: the size of the previously allocated memory
 * @new_size: the size of the new memory block
 *
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);
	else
		_memcpy(new_ptr, ptr, new_size);
	free(ptr);

	return (new_ptr);
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: no of bytes to copy
 *
 * Return: a void pointer to dest
*/
void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int idx = 0;

	while (idx < n)
	{
		((char *)dest)[idx] = ((char *)src)[idx];
		idx++;
	}
	return (dest);
}
