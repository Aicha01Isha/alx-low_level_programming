#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: parameter
 * Return: 0 on success
 */

int sum_dlistint(dlistint_t *head)
{

	int s = 0;
	dlistint_t *a;

	for (a = head; a != NULL; a = a->next)
	{
		s += a->n;
	}
	return (s);
}
