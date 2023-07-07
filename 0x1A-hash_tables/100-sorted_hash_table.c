#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table
 * @size: parameter
 * Return: sh table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_table;
	unsigned long int a;

	sh_table = malloc(sizeof(shash_table_t));
	if (sh_table == NULL)
		return (NULL);
	sh_table->size = size;
	sh_table->shead = NULL;
	sh_table->stail = NULL;
	sh_table->array = malloc(sizeof(shash_node_t) * size);
	if (sh_table->array == NULL)
	{
		free(sh_table);
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		sh_table->array[a] = NULL;
	}
	return (sh_table);
}

/**
 * make_shash_node - function that makes a node for the sorted hash table.
 * @key: parameter
 * @value: parameter
 * Return: sh node
 */

shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *sh_node;

	sh_node = malloc(sizeof(shash_node_t));
	if (sh_node == NULL)
		return (NULL);
	sh_node->key = strdup(key);
	if (sh_node->key == NULL)
	{
		free(sh_node);
		return (NULL);
	}
	sh_node->value = strdup(value);
	if (sh_node->value == NULL)
	{
		free(sh_node->key);
		free(sh_node);
		return (NULL);
	}
	sh_node->next = sh_node->snext = sh_node->sprev = NULL;
	return (sh_node);
}

/**
 * add_to_sorted_list - adds a node to the sorted linked list
 * @table: parameter
 * @node: parameter
 * Return: 0 on success
 */

void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp_var;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	temp_var = table->shead;
	while (temp_var != NULL)
	{
		if (strcmp(node->key, temp_var->key) < 0)
		{
			node->snext = temp_var;
			node->sprev = temp_var->sprev;
			temp_var->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp_var = temp_var->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set -  function that adds an element to the hash table.
 * @ht: parameter
 * @key: parameter
 * @value: parameter
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	char *n_val;
	shash_node_t *sh_node, *temp_var;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp_var = ht->array[i];
	while (temp_var != NULL)
	{
		if (strcmp(temp_var->key, key) == 0)
		{
			n_val = strdup(value);
			if (n_val == NULL)
				return (0);
			free(temp_var->value);
			temp_var->value = n_val;
			return (1);
		}
		temp_var = temp_var->next;
	}
	sh_node = make_shash_node(key, value);
	if (sh_node == NULL)
		return (0);
	sh_node->next = ht->array[i];
	ht->array[i] = sh_node;
	add_to_sorted_list(ht, sh_node);
	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: parameter
 * @key: parameter
 * Return: NULL.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *temp_var;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	temp_var = ht->array[i];
	while (temp_var != NULL)
	{
		if (strcmp(temp_var->key, key) == 0)
			return (temp_var->value);
		temp_var = temp_var->next;
	}
	return (NULL);
}

/**
 * shash_table_print - function that prints a hash table.
 * @ht: parameter
 * Return: 0 on success
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_var;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp_var = ht->shead;
	while (temp_var != NULL)
	{
		if (f == 1)
			printf(", ");
		printf("'%s': '%s'", temp_var->key, temp_var->value);
		flag = 1;
		temp_var = temp_var->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a sorted hash table in reverse.
 * @ht: parameter
 * Return: 0 on success
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_var;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp_var = ht->stail;
	while (temp_var != NULL)
	{
		if (f == 1)
			printf(", ");
		printf("'%s': '%s'", temp_var->key, temp_var->value);
		flag = 1;
		temp_var = temp_var->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: parameter
 * Return: 0 on success
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int a;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (a = 0; a < ht->size; a++)
	{
		while (ht->array[a] != NULL)
		{
			next = ht->array[a]->next;
			free(ht->array[a]->key);
			free(ht->array[a]->value);
			free(ht->array[a]);
			ht->array[a] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
