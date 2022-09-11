#include <stdio.h>
/**
 * main-Entry point
 * Combnations of double digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
for (m = 48; m < 57; m++)
{
int n;

for (n = m + 1; n < 58; n++)
{
putchar(m);
putchar(n);

if (m == 56 && n == 57)
continue;
putchar(44);
putchar(32);
}
}
putchar('\n');

return (0);
}
