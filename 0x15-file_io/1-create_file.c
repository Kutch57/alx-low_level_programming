#include "main.h"


/**
 * create_file - creates a file with specified permissions.
 * @filename: name of the file to be created.
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 upon success, -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
