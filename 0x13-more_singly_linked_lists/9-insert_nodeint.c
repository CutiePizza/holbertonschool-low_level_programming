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
	listint_t *p = *head;
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
	while (p != NULL && i + 1 < idx)
	{
		i++;
		p = p->next;
		if (p == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = p->next;
	p->next = new_node;
	return (new_node);
}
