#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file to print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: wr- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op;
	ssize_t wr;
	ssize_t rd;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(op);
	return (wr);
}
