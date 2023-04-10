#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of the program
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
