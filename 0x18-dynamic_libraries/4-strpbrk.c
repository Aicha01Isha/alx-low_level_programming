#include "main.h"

/**
 * _strpbrk - function that is the entry point
 *
 * @s: parameter
 *
 * @accept: parameter
 *
 * Return: 0 on success
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
