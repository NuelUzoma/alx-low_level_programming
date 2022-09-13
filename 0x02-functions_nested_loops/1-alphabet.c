#include <stdio.h>
#include "main.h"
/**
 * main-Entry point
 * A function that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int digit;

	for (digit = 97; digit <= 122; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
}
