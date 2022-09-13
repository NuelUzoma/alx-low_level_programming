#include <stdio.h>
#include "main.h"
/**
 * main-Entry point
 * A function that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 97; digit <= 122; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
