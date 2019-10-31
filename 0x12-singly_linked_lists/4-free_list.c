#include "lists.h"
#include <stdio.h>
/**
  * free_list - frees a list
  * @head: header of the list
  */

void free_list(list_t *head)
{
	list_t *p = NULL;

	while (head != NULL)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}

