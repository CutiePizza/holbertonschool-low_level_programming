#include "lists.h"

/**
  * delete_nodeint_at_index - delete a node
  * @head: head of list
  * @index: index
  * Return: integer
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head, *tmp = NULL;
	unsigned int i = 0;

	while (p != NULL)
	{
		if (index == 0)
		{
			*head = p->next;
			free(p);
			return (1);
		}
		else if (i == index)
		{
			tmp->next = p->next;
			free(p);
			return (1);
		}
		i++;
		tmp = p;
		p = p->next;
	}
return (-1);
}
