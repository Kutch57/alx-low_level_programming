#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 * @filename: Refers to the name of the file that text is appended to.
 * @text_content: NULL terminated string to append to the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;

	write_count = write(fd, text_content, len);
	if (write_count == -1)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);
	return (1);
}
