#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: parameter
 * Return: 0 on sucess
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int a = 0;

	if (ht == NULL)
		return;
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			while (ht->array[a])
			{
				current = ht->array[a];
				free(current->key);
				free(current->value);
				ht->array[a] = ht->array[a]->next;
				free(current);
			}
		}
	}
	free(ht->array);
	free(ht);
}
