#include "main.h"

/**
 * _memset - function that fill a block of memory with a specific value
 *
 * @s: parameter to be filled
 *
 * @b: value
 *
 * @n: parameter to change
 *
 * Return: s on success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
