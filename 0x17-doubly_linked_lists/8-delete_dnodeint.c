#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: parameter
 * @index: parameter
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *he1;
	dlistint_t *he2;
	unsigned int a;

	he1 = *head;
	if (he1 != NULL)
		while (he1->prev != NULL)
			he1 = he1->prev;
	a = 0;
	while (he1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = he1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				he2->next = he1->next;
				if (he1->next != NULL)
					he1->next->prev = he2;
			}
			free(he1);
			return (1);
		}
		he2 = he1;
		he1 = he1->next;
		a++;
	}
	return (-1);
}
