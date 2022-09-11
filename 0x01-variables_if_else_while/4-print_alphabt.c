#include <stdio.h>
/**
 * main-Entry point
 * prints all lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;
letter = 'a';
while (letter <= 'z')
{
	if (letter == 'q' || letter == 'e')
	{
		letter++;
		continue;
	}
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
