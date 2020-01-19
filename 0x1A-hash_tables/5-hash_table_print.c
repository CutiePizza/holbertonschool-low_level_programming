#include "hash_tables.h"

/**
 * hash_table_print - print element of hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int index = 0;
	char *v = "";

	if (!ht || (!ht->array))
		return;

	printf("{");
	while (index <= ht->size || ht->array[index] == NULL)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			printf("%s", v);
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			v = ", ";
		}
		index++;
	}
	printf("}\n");
}
