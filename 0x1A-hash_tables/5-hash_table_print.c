#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: 0 Successful
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht ==NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];
		printf("'%lu':", i);
		while (node != NULL)
		{
			printf("'%s': '%s', ", node->key, node->value);
			node = node->next;
		}
		printf("\n");
	}
}
