#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key.
 * @key: parameter
 * @size: parameter
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
