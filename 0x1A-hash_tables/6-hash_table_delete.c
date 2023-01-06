#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table
 * Return: 0 Successful
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			hash_npde_t *tmp = node;

			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
