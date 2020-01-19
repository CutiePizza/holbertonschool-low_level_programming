#include "hash_tables.h"

/**
 * hash_table_get - get an element from the hash table
 * @ht: hash table
 * @key: key to add or update
 * Return: Value on success, NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key || !key[0] || !ht || !(ht->array))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
