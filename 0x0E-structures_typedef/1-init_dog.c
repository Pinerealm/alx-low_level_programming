#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type 'struct dog'
 *
 * @d: pointer to the 'struct dog' variable
 * @name: pointer to the dog name
 * @age: dog age
 * @owner: pointer to name of owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
