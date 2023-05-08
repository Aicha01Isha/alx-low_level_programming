#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - function that allocates 1024 bytes for a buffer
 * @file: parameter
 * Return: buffer
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - function that closes file descriptors
 * @fd: parameter
 */

void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - funtion that copies the contents of a file to another file
 * @argc: parameter
 * @argv: parameter
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fr, t, i, j;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	i = read(fr, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		j = write(t, buff, i);
		if (t == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		i = read(fr, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);
	free(buff);
	close_file(fr);
	close_file(t);
	return (0);
}
