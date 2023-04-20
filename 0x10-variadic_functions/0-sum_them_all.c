#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paramters
 *
 * @n: parameter
 *
 * @...: parameter
 *
 * Return: 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);
	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
