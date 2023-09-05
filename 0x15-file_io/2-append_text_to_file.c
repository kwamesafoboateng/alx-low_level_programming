#include "main.h"

/*
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: Contains the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: 1 on success -1 on failure
 *
 * Description: Creates a file with read and write
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len_s = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_s = 0; text_content[len_s];)
			len_s++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len_s);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
