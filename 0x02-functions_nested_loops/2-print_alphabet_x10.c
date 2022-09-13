#include "main.h"
/**
 * print_alphabet_x10-A Function that prints 10x the alphabet
 */
void print_alphabet_x10(void)
{
	int digit, number;

	for (number = 0; number < 10; number++)
	{
		for (digit = 97; digit <= 122; digit++)
		{
			_putchar(digit);
		}
		_putchar('\n');
	}
}
