#include <stdio.h>
/**
 * main-Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;
letter = 'a';
while(letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
