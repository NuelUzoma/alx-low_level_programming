#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 * @str: a constant string to convert to ASCII
 * Return: 0 Successful
 * Author - Madubuike Emmanuel Uzoma
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashh;
	int i;

	hashh = 5381;
	while ((i = *str++))
	{
		hashh = ((hashh << 5) + hashh + i);/* hashh * 33 + c */
	}
	return (hashh);
}
