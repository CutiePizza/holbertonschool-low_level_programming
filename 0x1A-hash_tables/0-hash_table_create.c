#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: unisgned long int
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab = NULL;

	if (size <= 0)
		return (NULL);
	hash_tab = malloc(sizeof(hash_tab) * size);
	if (hash_tab == NULL)
		return (NULL);
	hash_tab->array = NULL;
	hash_tab->size = 0;
	return (hash_tab);
}
