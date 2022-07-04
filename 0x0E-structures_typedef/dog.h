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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
