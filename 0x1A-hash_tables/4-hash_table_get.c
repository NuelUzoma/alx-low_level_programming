#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * *hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: key associated with the value
 * Return: the value associated or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
