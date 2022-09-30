#include <stdio.h>

/**
 * main - return the number of arguments
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
		argv[i] = 0;
	}
	return (0);
}
