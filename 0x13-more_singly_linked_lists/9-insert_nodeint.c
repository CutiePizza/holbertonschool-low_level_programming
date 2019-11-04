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
	listint_t *p = *head, *tmp = NULL;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	while (p != NULL)
	{
		if (idx == 0)
		{
		new_node->n = n;
		new_node->next = p;
		*head = new_node;
		break;
		}
		else if (i == idx)
		{
		new_node->n = n;
		new_node->next = tmp->next;
		tmp->next = new_node;
		break;
		}
		i++;
		tmp = p;
		p = p->next;
	}
return (new_node);
}