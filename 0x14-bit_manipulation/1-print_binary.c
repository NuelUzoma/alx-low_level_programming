#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: unsigned integer
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	printf("%ld", n % 2);
}
