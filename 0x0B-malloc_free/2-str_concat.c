#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that ends input and add together for size
 *
 * @s1: parameter
 *
 * @s2: parameter
 *
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = n = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	con = malloc(sizeof(char) * (i + n + 1));
	if (con == NULL)
		return (NULL);
	i = n = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		con[i] = s2[n];
		i++, n++;
	}
	con[i] = '\0';
	return (con);
}
