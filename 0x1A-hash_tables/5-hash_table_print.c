#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: parameter
 * Return: 0 on success
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *test;
	unsigned long int a = 0, b = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (a = b; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			test = ht->array[a];
			while (t)
			{
				printf("%s'%s': '%s'", b == 0 ? "" : ", ",
					   test->key, test->value), b++;
				test = test->next;
			}
		}
	}
	printf("}\n");
}
