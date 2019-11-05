#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node
 * @head: head of list
 * @idx: index
 * @n: integer
 * Return: adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head, *tmp;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (p != NULL && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (p == NULL)
		return (NULL);
	while (p != NULL && i != idx)
	{
		tmp = p;
		p = p->next;
		i++;
		if (p == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	tmp->next = new_node;
	new_node->next = p;
	return (new_node);
}
