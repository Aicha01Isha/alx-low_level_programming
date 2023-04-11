#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main function
 *
 * @ac: parameter
 *
 * @av: parameter
 *
 * Return: 0 on success
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, a = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			a++;
	}
	a += ac;
	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
