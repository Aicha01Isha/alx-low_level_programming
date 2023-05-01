#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			nw->next = tmp->next;
			tmp->next = nw;
			return (nw);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
