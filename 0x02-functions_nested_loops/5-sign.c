#include "main.h"
/**
 * print_sign-prints the sign of a number
 * @n: is the variable of this program
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 48)
	{
		_putchar(45);
		return (-1);
	}

}
