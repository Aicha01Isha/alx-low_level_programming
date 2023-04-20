#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints each array elem on a newl
 *
 * @array: parameter
 *
 * @size: parameter
 *
 * @action: parameter
 *
 * Return: 0 on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
