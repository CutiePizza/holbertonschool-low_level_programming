#include "lists.h"

/**
  * listint_len - Print a list
  * @h: head of list
  * Return: size of list
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	unsigned int i = 0;

	while (p != NULL)
	{
		i++;
		p = p->next;
	}

return (i);
}
