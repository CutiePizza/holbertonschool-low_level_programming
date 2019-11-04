#include "lists.h"

/**
  * add_nodeint_end - add node at the end of a list
  * @head: head of list
  * @n: integer
  * Return: head
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	while (p != NULL && p->next != NULL)
	{
		p = p->next;
	}

	new_node->n = n;
	new_node->next = NULL;

	if (p != NULL)
		p->next = new_node;
	else
		*head = new_node;

return (*head);
}
