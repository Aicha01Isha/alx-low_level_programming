#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 *
 * @s: parameter to be converted
 *
 * Return: n
 */

int _atoi(char *s)
{
	int a, b, c, len, d, dig;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	dig = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			dig = s[a] - '0';
			if (b % 2)
				dig = -dig;
			c = c * 10 + dig;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - function that multiplies two numbers
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int res, no1, no2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);
	res = no1 * no2;

	printf("%d\n", res);

	return (0);
}
