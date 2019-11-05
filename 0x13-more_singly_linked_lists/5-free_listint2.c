#include "lists.h"

/**
  * free_listint2 - free a list
  * @head: head of list
  */

void free_listint2(listint_t **head)
{
	listint_t *p = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
