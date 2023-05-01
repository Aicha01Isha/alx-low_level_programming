#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * @head: parameter
 * @index: parameter
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *cur = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (a < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		a++;
	}
	cur = tmp->next;
	tmp->next = current->next;
	free(cur);
	return (1);
}
