#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - functions that print strings
 * @separator: separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		separator = "";
	}
	printf("%s", va_arg(ap, char*));
	for (i = 1; i < n; i++)
	{
		printf("%s%s", separator, va_arg(ap, char*));
	}
	va_end(ap);
	printf("\n");
}
