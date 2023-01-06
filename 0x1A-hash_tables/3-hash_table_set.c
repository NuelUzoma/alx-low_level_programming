#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hash table to add/update the key/value to
 * @key: this is the key, it cannot be empty
 * @value: associated with the key
 * Return: 1 upon success,0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
