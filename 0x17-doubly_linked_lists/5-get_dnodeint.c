#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: parameter
 * @index: parameter
 * Return: 0 on success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int a;

	cur = head;
	a = 0;
	while (cur != NULL)
	{
		if (a == index)
			return (cur);
		cur = cur->next;
		a++;
	}
	return (NULL);
}
