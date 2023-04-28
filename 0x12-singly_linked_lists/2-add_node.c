#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: parameter
 * @str: parameter
 * Return: head on success, NULL upon failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int ln = 0;

	while (str[ln])
		ln++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->ln = ln;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
