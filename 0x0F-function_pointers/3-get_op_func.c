#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function to perform
 *
 * @s: parameter
 *
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;
	return (ops[a].f);
}
