#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * key_index- a function based on djb2 that gives the index of a key
 * @key: the key assigned to the value
 * @size: the size of the hash table
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
