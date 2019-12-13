#include "lists.h"

/**
 * sum_dlistint - Sum of all the data
 * @head: head of list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int s = 0;

	while (p != NULL)
	{
		s += p->n;
		p = p->next;
	}
	return (s);
}
