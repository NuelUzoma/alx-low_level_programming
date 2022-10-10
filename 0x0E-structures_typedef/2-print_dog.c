#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the function
 * @d: variable struct
 *
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %1f\n", d->age);
	printf("Owner: %s\n", d->owner);
	if (d == NULL)
	{
		printf("");
	}
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == NULL)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
}
