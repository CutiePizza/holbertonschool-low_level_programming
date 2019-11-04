#include "lists.h"

/**
  * get_nodeint_at_index - get node at index index
  * @head: head of list
  * @index: integer
  * Return: node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i = 0;

	while (p != NULL)
	{
		if (i == index)
			return (p);
		i++;
		p = p->next;
	}
return (NULL);
}
