#include "main.h"

/**
 * _print_rev_recursion - a function that reverses a string
 * @s: char variable
 * Return: reverse of the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
