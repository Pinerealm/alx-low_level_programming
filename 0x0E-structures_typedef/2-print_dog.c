#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a variable of type 'struct dog'
 * @d: pointer to the 'struct dog' variable
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name = d->name ? d->name : "(nil)";
		d->owner = d->owner ? d->owner : "(nil)";

		printf("Name: %s\nAge: %f\n", d->name, d->age);
		printf("Owner: %s\n", d->owner);
	}
}
