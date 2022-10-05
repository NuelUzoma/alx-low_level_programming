#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int variable
 * @argv: cjhar variable
 * Return: the result
 */
int main(int argc, char *argv[])
{
	int result, count, a, b, c;

	result = 0;
	for (a = 0; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		count = atoi(argv[c]);
		if (count >= 0)
		{
			result += count;
		}
	}
	printf("%d\n", result);
	return (0);
}
