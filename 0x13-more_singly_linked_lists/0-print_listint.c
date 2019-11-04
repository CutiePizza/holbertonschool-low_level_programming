#include "lists.h"

/**
  * print_listint - Print a list
  * @h: head of list
  * Return: size of list
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	unsigned int i = 0;

	while (p != NULL)
	{
		i++;
		printf("%d\n", p->n);
		p = p->next;
	}

return (i);
}
