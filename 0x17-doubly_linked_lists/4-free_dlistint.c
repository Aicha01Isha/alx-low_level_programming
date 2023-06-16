#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: parameter
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;
		free(head);
		head = next;
	}
}
