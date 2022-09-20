#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: variable
 * Return: 0
 */
void rev_string(char *s)
{
	int count = 0;
	int l;
	char rev = s[0];

	while (s[count] != '\0')
		count++;
	for (l = 0; l < count; l++)
	{
		count--;
		rev = s[l];
		s[l] = s[count];
		s[count] = rev;
	}
}
