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
	int i,j;

	for (i = 0; s[i] && s[i] != ','; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] != accept[j])
			{
				continue;
				return (s);
			}
			else 
			{
				return (NULL);
			}
		}
	}
}
