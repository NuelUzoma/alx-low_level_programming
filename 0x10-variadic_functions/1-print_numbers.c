#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: size of integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

if (!n)
{
return;
}
va_start(ap, n);
printf("%d", va_arg(ap, int));
if (separator == NULL)
{
separator = "";
}
for (i = 1; i < n; i++)
{
printf("%s%d", separator, va_arg(ap, int));
}
va_end(ap);
printf("\n");
}
