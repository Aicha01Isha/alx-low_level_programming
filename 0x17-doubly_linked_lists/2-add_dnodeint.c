#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: parameter
 * @n: parameter
 * Return: new node on success, 0 on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_nod;

	new_node = malloc(sizeof(dlistint_t));
	if (n_nod == NULL)
		return (NULL);
	n_nod->n = n;
	n_nod->next = *head;
	n_nod->prev = NULL;
	if (*head != NULL)
		(*head)->prev = n_nod;
	*head = n_nod;
	return (n_nod);
}
