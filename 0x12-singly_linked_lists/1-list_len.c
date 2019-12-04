#include "lists.h"
#include <stdio.h>

/**
 * list_len - Return number of elements of a list
 * @h: header of the list
 * Return: An unsigned integer
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	unsigned int i = 0;

	while (p != NULL)
	{
		p = p->next;
		i++;
	}

	return (i);
}
