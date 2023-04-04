#include "main.h"
/**
 * _strchr - function that is the entry point
 *
 * @s: parameter
 *
 * @c: parameter
 *
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
