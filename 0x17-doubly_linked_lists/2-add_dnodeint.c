#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: head of list
 * @n: integer to add
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->n = n;
		if (*head != NULL)
			(*head)->prev = new;
		new->next = (*head);
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
return (NULL);
}
