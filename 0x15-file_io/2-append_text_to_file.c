#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: parameter
 * @text_content: parameter
 * Return: -1 on failure, 0 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n, i, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	n = open(filename, O_WRONLY | O_APPEND);
	i = write(o, text_content, l);
	if (n == -1 || i == -1)
		return (-1);
	close(n);
	return (1);
}

