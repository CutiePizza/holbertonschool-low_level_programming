#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: head of list
 * @n: number to add
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *p;

	if (new != NULL)
	{
		p = *head;
		while (p != NULL && p->next != NULL)
		{
			p = p->next;
		}
		new->n = n;
		new->next = NULL;
		if (p != NULL)
		{
			p->next = new;
			new->prev = p;
		}
		else
			*head = new;
		return (new);
	}
return (NULL);
}
