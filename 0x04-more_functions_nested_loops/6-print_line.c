#include "main.h"
/**
 * print_line - a function that draws
 * a straight line
 * @n: the program variable
 * Return: Always 0
 */
void print_line(int n)
{
	for (; n > 0; n--)
	_putchar('_');
	_putchar('\n');
}
