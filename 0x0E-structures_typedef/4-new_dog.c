#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: Short Description
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
}
