#include "main.h"
#include <ctype.h>
/**
 * string_toupper - converts all lowercase to uppercase
 * @p: the character variable
 * Return: 0 (Success)
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		p[i] = toupper(p[i]);
	}
	return (p);
}
