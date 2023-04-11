#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that duplicate to new memory space location
 *
 * @str: parameter
 *
 * Return: 0 on success
 */

char *_strdup(char *str)
{
	char *a;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		a[n] = str[n];
	return (a);
}
