#include "main.h"
/**
 * _isalpha-Checks for uppercase character
 * @c: is the variable of the program
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
