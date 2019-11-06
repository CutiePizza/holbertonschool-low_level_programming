#include "lists.h"

/**
  * find_listint_loop - find if a list has a loop
  * @head : head of the list
  * Return: a list
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = *head, *fast = *head;

	if (head == NULL)
		return (NULL);
	while (slow != fast || fast != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	if (slow == fast)
	{
		slow = *head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
	return (slow);
	}
return (NULL);
}
