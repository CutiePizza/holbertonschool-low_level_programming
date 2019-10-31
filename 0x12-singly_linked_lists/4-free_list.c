#include "lists.h"
#include <stdio.h>
/**
  * free_list - frees a list
  * @head: header of the list
  */

void free_list(list_t *head)
{
	list_t *p = head;
	list_t *tmp;

	while (p != NULL)
	{
		tmp = p->next;
		free(p);
		p = tmp;
	}
head = NULL;
}
