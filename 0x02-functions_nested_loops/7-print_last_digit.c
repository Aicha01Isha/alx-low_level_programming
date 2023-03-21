#include "main.h"
/**
 * print_last_digit - function that prints last digit
 *
 * @i: parameter to be printed
 *
 * Return: k on success
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
