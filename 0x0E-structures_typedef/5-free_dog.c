#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t variable
 *
 * @d: pointer to the dog variable
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
