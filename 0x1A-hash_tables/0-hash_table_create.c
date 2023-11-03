#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: this the size of the hash table
 * Return: a pointer to newly created hash table
 * If something went wrong, your func should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = (hash_node_t **) calloc(new_table->size,
				sizeof(hash_node_t *));
	for (i = 0; i < new_table->size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
