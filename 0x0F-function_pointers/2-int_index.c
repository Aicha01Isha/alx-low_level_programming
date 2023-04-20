#include "function_pointers.h"

/**
 * int_index - function that return index place if comparison = true, else -1
 *
 * @array: parameter
 *
 * @size: parameter
 *
 * @cmp: parameter
 *
 * Return: 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
