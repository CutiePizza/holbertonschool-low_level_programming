#include "hash_tables.h"

/**
 * key_index - return the index of the given key
 * @key: The key
 * @size: size of the array and hash table
 * Return: index of the given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2((unsigned char *)key);
	index = hash % size;
	return (index);
}
