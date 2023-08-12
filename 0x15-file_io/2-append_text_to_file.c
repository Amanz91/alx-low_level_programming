#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - a function that appends a text to a file.
 * @filename: name of file to be appended to
 * @text_content: text to be appended to file
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content != NULL && text_content[l] != '\0')
	{
		l++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, l);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
