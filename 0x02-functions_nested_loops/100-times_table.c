#include "main.h"
#include <stdio.h>
/**
 * print_times_table - A function that prints the times table, starting with 0.
 *
 * @n: is the variable of the function
 *
 * Return: print times table from 0 to 15
 */
void print_times_table(int n)
{
	int j;

	for (n = 0; n <= 15; n++)
	{
		if (j == n++)
		printf("%16d", n*j);
		printf(" ");
	}
	printf("\n");
}
