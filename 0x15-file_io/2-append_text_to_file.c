#include "main.h"
/**
 * append_text_to_file - a function that appends a file
 * @filename: a pointer to file to be appended
 * @text_content: a pointer to string to be add
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len, i;

	len = 0;
	i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			len++;
			i++;
		}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
