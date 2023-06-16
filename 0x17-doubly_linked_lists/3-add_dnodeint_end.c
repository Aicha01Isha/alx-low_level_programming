#include "lists.h"

/**
 *  add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: parameter
 * @n: parameter
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_nod;

	n_nod = malloc(sizeof(dlistint_t));
	if (n_nod == NULL)
		return (NULL);
	n_nod->n = n;
	n_nod->next = NULL;
	if (*head == NULL)
	{
		n_nod->prev = NULL;
		*head = n_nod;
		return (n_nod);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = n_nod;
	n_nod->prev = *head;
	return (n_nod);
}
