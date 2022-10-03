#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: variable
 * @b: variable
 * @n: integer variable
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
