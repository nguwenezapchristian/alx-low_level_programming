#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
