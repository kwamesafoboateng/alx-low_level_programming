#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file
 * @text_content: Content to write the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len_s;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_s = 0; text_content[len_s];)
			len_s++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len_s);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
