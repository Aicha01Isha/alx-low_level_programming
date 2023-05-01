#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: parameter
 * Return: number
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nu;

	if (!head || !*head)
		return (0);
	nu = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (nu);
}
