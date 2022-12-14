#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: character variable
 * @c: character variable
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
