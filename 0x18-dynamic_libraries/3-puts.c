#include "main.h"

/**
 * _puts - function that prints a string to stdout
 * @str: parameter
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
