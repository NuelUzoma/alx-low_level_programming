#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * of integers followed by a new line
 * @a: variable
 * @n: variable
 * Return: 0
 */
void print_array(int *a, int n)
{
	int in;

	for (in = 0; in < n; in++)
	{
		if (in != n - 1)
			printf("%d, ", a[in]);
		else
			printf("%d", a[in]);
	}
	putchar(10);
}
