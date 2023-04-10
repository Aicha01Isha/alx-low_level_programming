#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - function that checks
 *
 * @str: parameter
 *
 * Return: 0 on success
 */

int check_num(char *str)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(str))
	{
		if (!isdigit(str[cnt]))
		{
			return (0);
		}

		cnt++;
	}
	return (1);
}

/**
 * main - function that print the name of the program
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int cnt;
	int str_to_int;
	int sum = 0;

	cnt = 1;
	while (cnt < argc)
	{
		if (check_num(argv[cnt]))
		{
			str_to_int = atoi(argv[cnt]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cnt++;
	}
	printf("%d\n", sum);
	return (0);
}
