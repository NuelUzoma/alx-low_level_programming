#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of
 * a set of bytes
 * @s: character variable
 * @accept: char variable
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
