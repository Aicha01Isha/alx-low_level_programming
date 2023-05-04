#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: parameter
 * @index: parameter
 * Return: bit val
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b_val;

	if (index > 63)
		return (-1);
	b_val = (n >> index) & 1;
	return (b_val);
}
