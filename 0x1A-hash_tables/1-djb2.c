#include "hash_tables.h"

/**
 * hash_djb2 - hash function to implement djb2 algorithm.
 * @str: parameter
 * Return: hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int a;

	h = 5381;
	while ((a = *str++))
	{
		h = ((h << 5) + h) + c;
	}
	return (h);
}
