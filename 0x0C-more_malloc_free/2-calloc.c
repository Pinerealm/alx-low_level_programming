#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc and initializes it
 * to zero
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int idx = 0, elements;

	if (nmemb == 0 || size == 0)
		return (NULL);

	elements = nmemb * size;
	ptr = malloc(elements);
	if (ptr == NULL)
		return (NULL);

	while (idx < elements)
	{
		((char *)ptr)[idx] = 0;
		idx++;
	}

	return (ptr);
}
