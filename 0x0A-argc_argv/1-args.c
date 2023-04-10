#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the number of arguments passed to the program
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
