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
void init_dog(struct dog *d, __attribute__((unused)) char *name,
__attribute__((unused)) float age, __attribute__((unused)) char *owner)
{
	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";
}
