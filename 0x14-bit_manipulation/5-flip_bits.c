#include "main.h"

/**
 * flip_bits - function that counts the number of bits
 * @n: parameter
 * @m: parameter
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c = 0;
	unsigned long int cur;
	unsigned long int ex = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		cur = ex >> a;
		if (cur & 1)
			c++;
	}
	return (c);
}
