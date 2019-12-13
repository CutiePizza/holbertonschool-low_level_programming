#include "lists.h"


/**
 * free_dlistint - frees a list
 * @head: header of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p = NULL;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}

