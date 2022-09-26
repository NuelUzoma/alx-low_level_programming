#include "main.h"

/**
 * cap_string - capitalizes all words
 * of a string
 * @p: variable
 * Return: 0 (Success)
 */
char *cap_string(char *p)
{
	int count;

	count = 0;
	while (p[count] != '\0')
	{
			if (p[0] >= 97 && p[0] <= 122)
			{
				p[0] = p[0] - 32;
			}
			if (p[count] == ' ' || p[count] == '\t' || p[count] == ';' || p[count] == '.' || p[count] == '!' || p[count] == '"' || p[count] == '{' || p[count] == '(' || p[count] == '?' || p[count] == ')' || p[count] == '}' || p[count] == '\n' || p[count] || ',')
			{
				if (p[count + 1] >= 97 && p[count + 1] <= 97)
				{
					p[count + 1] = p[count + 1] - 32;
				}
			}
			count++;
	}
	return (p);
}
