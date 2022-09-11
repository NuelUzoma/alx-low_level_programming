#include <stdio.h>
/**
 * main-Entry poin
 * prints alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;
letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');

return (0);
}
