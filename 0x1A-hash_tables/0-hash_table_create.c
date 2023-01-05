#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *hash_table_create - A function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 * Author: Madubuike Emmanuel Uzoma
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->array = calloc(size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
