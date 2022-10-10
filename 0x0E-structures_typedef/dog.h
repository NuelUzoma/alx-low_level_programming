#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data types for the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * Description: Short Description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
