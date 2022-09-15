#include "main.h"
/**
 * print_diagonal - a function that draws
 * a diagonal line
 * @n: variable
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	_putchar('\n');
	for (b = 0; b < n; b++)
	{
	for (a = b; a > 0; a--)
	_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
}
