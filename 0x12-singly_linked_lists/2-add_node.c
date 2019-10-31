#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
  * add_node - Add a node
  * @head: header of the list
  * @str: string to add
  * Return: An unsigned integer
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *new_node = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (str != NULL && new_node != NULL)
	{
		while (str[i])
			i++;

		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
