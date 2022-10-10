#include "dog.h"

/**
 * init_dog - initializes a variable of a type
 * @d: first member
 * @name: second member
 * @age: third member
 * @owner: fourth member
 *
 * Description - Short Description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
