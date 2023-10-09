#include "dog.h"
/**
 * init_dog - initializes a structure
 * @d: pointer
 * @name: pointer
 * @age: age
 * @owner: pointer of owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

