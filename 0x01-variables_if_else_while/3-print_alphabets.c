#include <stdio.h>
/**
 * main-Entry point
 * lowercase and then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letters;
letters = 'a';
while (letters <= 'z')
{
putchar(letters);
letters++;
}
letters = 'A';
while (letters <= 'Z')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
