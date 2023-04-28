#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: parameter
 * @str: parameter
 * Return: n on success, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tmp = *head;
	unsigned int ln = 0;

	while (str[ln])
		ln++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = ln;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
	return (n);
}
