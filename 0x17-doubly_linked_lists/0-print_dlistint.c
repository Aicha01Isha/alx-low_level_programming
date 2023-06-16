#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: parameter
 * Return: counter
 */

size_t print_dlistint(const dlistint_t *h)
{

	int coun = 0;

	if (h == NULL)
		return (coun);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		coun++;
	}
	return (coun);
}
