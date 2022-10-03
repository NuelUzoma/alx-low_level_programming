#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: variable character
 * @src: source variable
 * @n: integer
 * Return: 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;


	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
