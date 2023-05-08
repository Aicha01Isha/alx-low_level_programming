#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads text file print to STDOUT
 * @filename: parameter
 * @letters: parameter
 * Return: w on success, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fds;
	ssize_t i;
	ssize_t j;

	fds = open(filename, O_RDONLY);
	if (fds == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	j = read(fds, buff, letters);
	i = write(STDOUT_FILENO, buff, j);
	free(buff);
	close(fds);
	return (i);
}
