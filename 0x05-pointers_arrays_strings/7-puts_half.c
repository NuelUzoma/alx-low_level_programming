#include "main.h"

/**
 * puts_half - prints half of a string
 * and prints the other half
 * @str: variable
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

