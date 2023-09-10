#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: associated with the value
 * Return: a value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index, size;
	char *data;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			data = ht->array[i]->value;
			return (data);
		}
	}
	return (NULL);
}
