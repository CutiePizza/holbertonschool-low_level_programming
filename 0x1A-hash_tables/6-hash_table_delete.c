#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;
	unsigned int index = 0;

	if (!ht)
		return;
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			temp2 = temp->next;
			free(temp);
			temp = temp2;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
