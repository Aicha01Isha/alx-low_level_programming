#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: parametere1
 * @size: parameter2
 * @value: parameter1
 * Return: index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}
