#ifndef DOG_H
#define DOG_H

/**
 * struct dog - To hold some characteristics about dogs
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner
 *
 * Description: As above
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
