#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: parameter
 *
 * @b: parameter
 *
 * @n: parameter
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * *_calloc - function that allocates memory for an array
 *
 * @nmemb: parameter
 *
 * @size: parameter
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pntr = malloc(size * nmemb);
	if (pntr == NULL)
		return (NULL);
	_memset(pntr, 0, nmemb * size);
	return (pntr);
}
