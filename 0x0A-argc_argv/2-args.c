#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all arguments it receives
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
