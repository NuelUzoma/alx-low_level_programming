#include <stdio.h>

/**
 * * main - causes an infinite loop
 * * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	printf("Infinite loop avoided! \\o/\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);/*This is the part of the code*/
	}

	return (0);
}
