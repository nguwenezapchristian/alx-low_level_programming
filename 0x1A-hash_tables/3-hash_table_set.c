#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: table to add to or to update to
 * @key: key, string
 * @value: pointer to the value corresponding to the key
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index, size, i;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	if (value == NULL)
	{
		return (0);
	}
	value_copy = strdup(value);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
