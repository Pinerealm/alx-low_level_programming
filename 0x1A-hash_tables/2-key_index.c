#include "hash_tables.h"

/**
 * key_index - gets the index of a key.
 *
 * @key: key
 * @size: size of the hash table array
 *
 * Return: index at which the key/value pair should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
