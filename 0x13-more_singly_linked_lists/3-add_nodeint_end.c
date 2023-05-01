#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: parameter
 * @n: parameter
 * Return: i
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *tmp = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = i;
	return (i);
}
