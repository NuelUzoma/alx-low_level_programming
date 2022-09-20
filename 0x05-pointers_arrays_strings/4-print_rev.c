#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @*s: pointer
 * Return: reverse
 */
void print_rev(char *s)
{
	int len;
	
	len = strlen(s);
	while (len--)
		putchar(*(s + len));
	putchar(10);
}
