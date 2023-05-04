#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that writes the character c
 * @c: parameter
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
