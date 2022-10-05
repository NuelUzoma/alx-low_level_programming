#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated 
 * space in memory
 * @str: char variable
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;

	s = strdup(str);
	str = malloc(sizeof(char) * 6);
	if (str == NULL)
	{
		return (NULL);
	}

	return (0);
}

