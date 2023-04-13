#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: parameter
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
		exit(98);
	return (pntr);
}
