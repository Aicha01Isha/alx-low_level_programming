#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: parameter
 * @key: parameter
 * Return: NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int a = 0;
	hash_node_t *t_var;

	if (ht == NULL || key == NULL)
		return (NULL);
	a = key_index((const unsigned char *)key, ht->size);
	t_var = ht->array[a];
	for (; t_var != NULL; t_var = t_var->next)
	{
		if (strcmp(t_var->key, key) == 0)
			return (t_var->value);
	}
	return (NULL);
}
