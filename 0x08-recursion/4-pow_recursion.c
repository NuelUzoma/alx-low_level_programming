#include <math.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of an integer
 * raised to an integer
 * @x: integer
 * @y: integer
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int result;

	result = pow(x, y);
	if (y < 0)
	{
		return (-1);
	}
	return (result);
}
