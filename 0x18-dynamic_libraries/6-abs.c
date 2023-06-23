#include "main.h"
/**
 * _abs - function that computes the absolute value of an integral
 *
 * @a: parameter to be cheked
 *
 * Return: a on success
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
