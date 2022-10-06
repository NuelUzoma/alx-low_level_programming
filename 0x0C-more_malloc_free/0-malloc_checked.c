#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - it allocates memory using malloc
 * @b: integer to allocates number of bytes
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(ptr) * (b + 1));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
