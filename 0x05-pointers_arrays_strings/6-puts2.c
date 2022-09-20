#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other char
 * @str: variable
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
