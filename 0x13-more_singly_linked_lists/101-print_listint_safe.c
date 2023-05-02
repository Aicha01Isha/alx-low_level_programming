#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - function that counts the number of unique nodes
 * @head: parameter
 * Return: 0 on success
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *h;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tor = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (tor == h)
		{
			tor = head;
			while (tor != h)
			{
				n++;
				tor = tor->next;
				h = h->next;
			}
			tor = tor->next;
			while (tor != h)
			{
				n++;
				tor = tor->next;
			}
			return (n);
		}
		tor = tor->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t list safely.
 * @head: parameter
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);
	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
