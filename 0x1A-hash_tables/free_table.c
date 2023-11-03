#include "hash_tables.h"

/**
 * free_table - free allocated memory of a hash table
 * @new_table: pointer to the table
 */
void free_hash_table(hash_table_t *new_table)
{
	unsigned long int i;

	for (i = 0; i < new_table->size; i++)
	{
		hash_node_t *node = new_table->array[i];

		if (node != NULL)
		{
			free(node);
		}
	}
	free(new_table->array);
	free(new_table);
}
