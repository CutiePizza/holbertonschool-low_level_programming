#include "lists.h"

/**
 * dlistint_len - Return number of elements of a list
 * @h: header of the list
 * Return: An unsigned integer
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	unsigned int i = 0;

	while (p != NULL)
	{
		p = p->next;
		i++;
	}

	return (i);
}
