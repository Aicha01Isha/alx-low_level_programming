#include "main.h"

/**
 * print_binary - function that prints the binary equivalent
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int a, c = 0;
	unsigned long int cur;

	for (a = 63; a >= 0; a--)
	{
		cur = n >> a;
		if (cur & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
