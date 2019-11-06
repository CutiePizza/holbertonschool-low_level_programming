#include "lists.h"

/**
 * print_listint_safe - find if a list has a loop
 * @head : head of the list
 * Return: a list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	unsigned int i = 0;
	int ok = 1;

	if (head == NULL)
		exit(98);
	while (slow && fast && fast->next && ok == 1)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			ok = 0;
	}
	if (ok == 0)
	{
		slow = head;
		while (slow != fast->next)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			i++;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
	}
	else
	{
		slow = head;
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			i++;
		}
	}
	return (i);
}
