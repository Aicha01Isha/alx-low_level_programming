#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name using pointer to function
 *
 * @name: parameter
 *
 * @f: parameter
 *
 * Return: 0 on success
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
