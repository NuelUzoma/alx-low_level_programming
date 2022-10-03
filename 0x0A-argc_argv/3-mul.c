#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ln;

	if (argc > 1)
	{
		ln = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ln);
	}
	else
	{
		printf("Error\n");
	}
		return (0);
}
