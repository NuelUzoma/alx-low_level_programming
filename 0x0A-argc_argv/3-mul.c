#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum, result, len, fist;
	char first;

	len = strlen(argv[i]);
	for (i = 0; i < argc; i++)
	{
		sum = atoi(argv[i]);
		fist = atoi(first);
		if (argc > 1)
		{
			result = (sum * first);
			first = argv[len - i - 1];
			printf("%d\n", result);
		}
	}
	return (0);
}
