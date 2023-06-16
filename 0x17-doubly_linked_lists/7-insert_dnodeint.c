#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ne;
	dlistint_t *he;
	unsigned int a;

	ne = NULL;
	if (idx == 0)
		ne = add_dnodeint(h, n);
	else
	{
		he = *h;
		a = 1;
		if (he != NULL)
			while (he->prev != NULL)
				he = he->prev;
		while (he != NULL)
		{
			if (a == idx)
			{
				if (he->next == NULL)
					ne = add_dnodeint_end(h, n);
				else
				{
					ne = malloc(sizeof(dlistint_t));
					if (ne != NULL)
					{
						ne->n = n;
						ne->next = he->next;
						ne->prev = he;
						he->next->prev = ne;
						he->next = ne;
					}
				}
				break;
			}
			he = he->next;
			a++;
		}
	}
	return (ne);
}
