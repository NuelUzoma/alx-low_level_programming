#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: integer variable
 * @c: char variable
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *crr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	crr = malloc(size * sizeof(char));
	if (crr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		crr[i] = c;

	return (crr);
}
