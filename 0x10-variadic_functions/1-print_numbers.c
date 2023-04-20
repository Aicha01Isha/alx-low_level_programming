#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: parameter
 *
 * @n: parameter
 *
 * @...: parameter
 *
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ns;
	unsigned int in;

	va_start(ns, n);
	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(ns, int));
		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ns);
}
