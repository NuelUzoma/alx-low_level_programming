#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, sizeof(char) * n);

	return (dest);
}
