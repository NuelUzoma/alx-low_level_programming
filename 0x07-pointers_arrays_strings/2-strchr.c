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
	if (c != '\0')
	{
		strchr(s, c);
	}

	return (s);
}
