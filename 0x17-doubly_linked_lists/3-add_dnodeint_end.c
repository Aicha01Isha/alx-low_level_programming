#include "lists.h"

/**
 *  add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: parameter
 * @n: parameter
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *he;
	dlistint_t *ne;

	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	ne->next = NULL;
	he = *head;
	if (he != NULL)
	{
		while (he->next != NULL)
			he = he->next;
		he->next = ne;
	}
	else
	{
		*head = ne;
	}
	ne->prev = he;
	return (ne);
}
