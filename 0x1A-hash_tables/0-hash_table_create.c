#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hash_t = malloc(sizeof(hash_table_t));

	new_hash_t->size = size;
	new_hash_t->array = calloc(new_hash_t->size, sizeof(hash_node_t *));
	for (i = 0; i < new_hash_t->size; i++)
		new_hash_t->array[i] = NULL;
	return (new_hash_t);
}
