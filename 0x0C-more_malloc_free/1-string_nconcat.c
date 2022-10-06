#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that conatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i); i++)
		;

	for (j = 0; *(s2 + j); j++)
		;

	if (n < j)
		j = n;

	conc = malloc(sizeof(char) * (i + j + 1));

	if (conc == 0)
	{
		return (0);
	}

	for (k = 0; k < i; k++)
		*(conc + k) = *(s1 + k);

	for (k = 0, l = i; k < j; l++, k++)
		*(conc + l) = *(s2 + k);

	*(conc + l) = 0;

	return (conc);
}
