#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: character variable
 * @s2: character variable
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int count, value;


	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	value = s1[count] - s2[count];
	return (value);
}
