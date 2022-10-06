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
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	conc = malloc(sizeof(char) * (i + j + 1));

	if (conc == NULL)
	{
		free(conc);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		conc[k] = s1[k];

	for (j = 0; j <= n; k++, j++)
		conc[k] = s2[j];

	return (conc);
}
