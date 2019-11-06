#include "lists.h"

/**
 * print_listint_safe - find if a list has a loop
 * @head : head of the list
 * Return: a list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head, *save = NULL;
	unsigned int i = 0, ok = 1, n;

	if (head == NULL || *head == NULL)
		exit(98);
	while (slow && fast && fast->next && ok == 1)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow->next == fast)
		{
			save = fast;
			n = fast->n;
		}
		if (slow == fast)
			ok = 0;
	}
	slow = head;
	if (ok == 0)
	{
		while (slow != fast->next)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			i++;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
		printf("-> [%p] %u\n", (void *)save, n);
	}
	else
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			i++;
		}
	}
	return (i);
}
