#include <stdio.h>
#include "main.h"
/**
 * main-Check the code
 * 10 times the alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)/*This is a prototype function*/
{
	int digit, number;

	for (number = 0; number < 10; number++)
	{
		for (digit = 97; digit <= 122; digit++)
		{
			putchar(digit);
		}
		putchar('\n');
	}
}
