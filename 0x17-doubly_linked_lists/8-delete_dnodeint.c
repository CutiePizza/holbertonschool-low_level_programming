#include "lists.h"


/**
 * delete_dnodeint_at_index - delete a node
 * @head: head of list
 * @index: index
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;
	unsigned int i = 0;

	while (p != NULL && p->next != NULL)
	{
	
		if (index == 0)
		{
			*head = p->next;
			p->next->prev = NULL;
			free(p);
			return (1);
		}
		else if (index == 0 && p->next == NULL)
		{
			*head = NULL;
			free(p);
		}
		else if (i == index && p->next != NULL)
		{
			p->next->prev = p->prev;
			p->prev->next = p->next;
			free(p);
			return (1);
		}
		else if (i == index && p->next == NULL) 
		{
			p->prev->next = NULL;
			free(p);
			return (1);
		}
		i++;
		p = p->next;	
	}
return (-1);
}
