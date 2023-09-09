#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key(string) to generate hash value
 * @size: size of the array
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
