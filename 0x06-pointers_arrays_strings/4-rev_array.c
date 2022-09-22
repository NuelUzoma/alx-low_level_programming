#include "main.h"

/**
 * reverse_array - reverses the contents
 * @a: integer variable
 * @n: integer variable
 * Return: 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int x, count;

	count = 0;
	n = n - 1;
	while (count <= n)
	{
		x = a[count];
		a[count++] = a[n];
		a[n--] = x;
	}
}
