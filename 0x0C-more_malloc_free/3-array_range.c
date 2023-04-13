#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 *
 * @min: parameter
 *
 * @max: parameter
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *pntr;
	int i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	pntr = malloc(sizeof(int) * s);
	if (pntr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pntr[i] = min++;
	return (pntr);
}
