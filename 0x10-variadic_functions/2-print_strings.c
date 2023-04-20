#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: parameter
 *
 * @n: parameter
 *
 * @...: parameter
 *
 * Return: 0 on success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strgs;
	char *str;
	unsigned int in;

	va_start(strgs, n);
	for (in = 0; in < n; in++)
	{
		str = va_arg(strgs, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strgs);
}
