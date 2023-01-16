#include "dog.h"

/**
 *init_dog - inicialize the structure dog
 * @d: is the pointer to the structure
 * @name: is the name of the dog
 * @age: is the age
 * @owner: is the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
