#include <stdio.h>

/**
 * main - return the number of arguments
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
