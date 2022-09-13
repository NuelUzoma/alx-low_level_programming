#include "main.h"
/**
 * print_alphabet-prints alphabets in lowercase
 */
void print_alphabet(void)
{
	int digit;

	for (digit = 97; digit <= 122; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
