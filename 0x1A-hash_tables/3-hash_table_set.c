#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table or updates it
 * @ht: hash table
 * @key: key to add or update
 * @value: value associated to key
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index;

	if (!key || !key[0] || !ht || value == NULL || ht->array == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	else
		new->next = NULL;
	ht->array[index] = new;
	return (1);
}
