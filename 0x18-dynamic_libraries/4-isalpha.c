#include "main.h"
/**
 * _isalpha - function that checks for alphabetic characters
 *
 * @c: parameter to be printed
 *
 * Return: 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) | (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
