#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: points to a string of 0 and 1 char
 * Return: the converted number or 0 conditionally
 */
unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	int total = 0;
	int decval = 1, i;

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1') total += decval;
		{
			decval *= 2;
		}
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b == NULL)
		{
			return (0);
		}
	}
	return (total);
}
