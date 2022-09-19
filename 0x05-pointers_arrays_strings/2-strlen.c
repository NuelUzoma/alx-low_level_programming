#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @*s: pointer
 * @s: variable
 * @str: variable
 * @len: integer
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
