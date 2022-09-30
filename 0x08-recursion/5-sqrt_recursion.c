#include "main.h"

/**
 * sqrt - returns the square root also
 * @r: integer variable
 * @n: integer variable
 * _sqrt_recursion - this function prototype returns an integer
 * @n: integer variable
 * Return: square root of integer
 */
int sqrt(int n, int r)
{
	if (r <= n / 2)
	{
		if (n == 1)
			return (n);
		if (r * r != n)
			return (sqrt(n, r + 1));
		return (r);
	}
	return (-1);
}

int _sqrt_recursion(int n)
{
	return (sqrt(n, 0));
}
