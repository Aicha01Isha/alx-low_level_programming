#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: parameter
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int d_val = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		d_val = 2 * d_val + (b[a] - '0');
	}
	return (d_val);
}
