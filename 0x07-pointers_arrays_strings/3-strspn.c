#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: char variable
 * @accept: char variable
 * Return: s with a num of bytes except accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] && s[i] != ','; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
