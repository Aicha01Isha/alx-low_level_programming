#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints its own opcodes
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int bts, n;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bts = atoi(argv[1]);
	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (n = 0; n < bts; n++)
	{
		if (n == bts - 1)
		{
			printf("%02hhx\n", arr[n]);
			break;
		}
		printf("%02hhx ", arr[n]);
	}
	return (0);
}
