#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: first argument
 * @argv: second argument
 * Return: 0 if successful else return 1 on error
 */
int main(int argc, char *argv[])
{
	int ln;

	if (argc == 3)
	{
		ln = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ln);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
