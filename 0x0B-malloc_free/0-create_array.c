#include <stdio.h>
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
	char *ptr;

	while (size >= 1)
	{
		ptr = malloc(size * sizeof(char));
		size++;
		if (size == 0)
		{
			return (NULL);
		}
	}
	return (0);
}
