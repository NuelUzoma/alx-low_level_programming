#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable
 * @b: variable
 * @*a,@*b: pointers
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
