#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: parameter to be measured
 *
 * Return: longt
 */

int _strlen_recursion(char *s)
{
	int longt = 0;

	if (*s)
	{
		longt++;
		longt += _strlen_recursion(s + 1);
	}

	return (longt);
}
