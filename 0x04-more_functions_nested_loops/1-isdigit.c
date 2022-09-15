#include "main.h"
/**
 * _isdigit - Afunction that checks for a digit
 * (0 through 9)
 * @c: is the variable of the program
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
