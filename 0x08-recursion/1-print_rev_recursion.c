#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: parameter to be printed
 *
 * Return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
