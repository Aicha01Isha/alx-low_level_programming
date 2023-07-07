#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: parameter
 * @key: parameter
 * @value: parameter
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_nod = NULL;
	hash_node_t *cur_nod = NULL;
	unsigned long int a;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	a = key_index((unsigned char *)key, ht->size);
	cur_nod = ht->array[a];
	for (; cur_nod != NULL; cur_nod = cur_nod->next)
	{
		if (strcmp(cur_nod->key, key) == 0)
		{
			if (strcmp(cur_nod->value, value) != 0)
			{
				free(cur_nod->value);
				cur_nod->value = strdup(value);
			}
		return (1);
		}
	}
	n_nod = _node_(key, value);
	if (n_nod == NULL)
		return (0);
	n_nod->next = ht->array[a];
	ht->array[a] = n_nod;
	return (1);
}

/**
 * _node_ - function that creates a new_node node.
 * @key: arameter
 * @value: parameter
 * Return: new node
 */

hash_node_t *_node_(const char *key, const char *value)
{
	hash_node_t *n_nod;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);
	n_nod = malloc(sizeof(hash_node_t));
	if (n_nod == NULL)
		return (NULL);
	n_nod->key = strdup(key);
	if (n_nod->key == NULL)
	{
		free(n_nod);
		return (NULL);
	}
	n_nod->value = strdup(value);
	if (n_nod->value == NULL)
	{
		free(n_nod->key);
		free(n_nod);
		return (NULL);
	}
	n_nod->next = NULL;
	return (n_nod);
}
