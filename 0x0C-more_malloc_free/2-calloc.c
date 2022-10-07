#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array of elements
 * @size: number of bytes each
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		ptr = NULL;
	}
	if (ptr == 0)
	{
		return (0);
	}
	return (ptr);
}
