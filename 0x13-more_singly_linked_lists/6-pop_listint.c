#include "lists.h"

/**
  * pop_listint - free a list
  * @head: head of list
  * Return: 0 if list empty
  */

int pop_listint(listint_t **head)
{
	listint_t *p = NULL;
	int n = 0;

	if (*head != NULL)
	{
		p = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = p;
	}
return (n);
}
