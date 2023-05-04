#include "main.h"

/**
 * get_endianness - function that checks if a machine is little or big
 * Return: 0 on success
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (b);
}
