#include "main.h"

/**
 * _strstr - function that is the entry point
 *
 * @haystack: parameter
 *
 * @needle: parameter
 *
 * Return: 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
