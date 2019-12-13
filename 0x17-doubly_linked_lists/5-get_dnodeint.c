#include "lists.h"

/**
 * get_dnodeint_at_index - look for a given node
 * @head: head of list
 * @index: index
 * Return: the node in index index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *p = head;
	unsigned int i = 0;

		while (p != NULL)
		{
			if (index == i)
				return (p);
			p = p->next;
			i++;
		}
return (NULL);
}
