#include "main.h"

/**
 * _strspn - function that is the entry point
 *
 * @s: parameter
 *
 * @accept: parameter
 *
 * Return: 0 on success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				i++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
