#include <stdio.h>
/**
 * main-Entry point
 * prints first 10 digits with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);
	putchar('\n');

	return (0);
}
