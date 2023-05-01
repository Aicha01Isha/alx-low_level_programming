#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data
 * @head: parameter
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
