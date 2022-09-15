#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	i = 0;
	positive_or_negative(i);

	return (0);
}
