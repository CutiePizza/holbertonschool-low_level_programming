#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - Add a node at the end
 * @head: header of the list
 * @str: string
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new_node = malloc(sizeof(list_t));
	list_t *p = *head;
	unsigned int i = 0;

	if (str != NULL && new_node != NULL)
	{
		while (str[i])
			i++;

		while (p != NULL && p->next != NULL)
		{
			p = p->next;
		}
		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = NULL;

		if (p != NULL)
			p->next = new_node;
		else
			*head = new_node;
		return (new_node);
	}
	return (NULL);
}
