#include "main.h"
/**
 * _isupper - a function that prints a result
 * if the alphabet given is an uppercase
 * @c: is the variable of the program
 * Return: 1 if it uppercase
 * Return 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		if (c >= 97 && c <= 122)
		{
			return (0);
		}
}
