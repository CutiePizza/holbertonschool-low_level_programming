#include "lists.h"

/**
  * sum_listint - Sum all the n of a list
  * @head: head of list
  * Return: sum
  */

int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

return (sum);
}
