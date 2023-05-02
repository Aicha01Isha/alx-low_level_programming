#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: parameter
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
