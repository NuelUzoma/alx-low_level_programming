#include "main.h"

/**
 * is_palindrome - checks if a string is
 * a palindrome
 * @s: integer variable
 * Return: 1 if successful otherwise o
 */
int is_palindrome(char *s)
{
	int f, n, l;

	n = strlen(s);
	l = n - 1;
	f = 0;
	if (s[f + 1] != s[l - 1])
	{
		return (0);
	}
	else if (s[f + 1] > s[l - 1])
	{
		return (1);
	}
	else if (s[f + 1] == s[l - 1])
	{
		return (1);
	}
	return (is_palindrome(s));
}
