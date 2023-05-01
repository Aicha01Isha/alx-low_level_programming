#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node
 * @head: parameter
 * @index: parameter
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}
	return (tmp ? tmp : NULL);
}
