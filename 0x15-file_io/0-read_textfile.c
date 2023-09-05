#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX standard output.
 * @filename: File being read
 * @letters: Numbers of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or file name is NULL
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wr;
	ssize_t td;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	td = read(fd, buffer, letters);
	if (td == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, td);
	if (wr != td)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr);
}
