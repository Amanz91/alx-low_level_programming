#include "main.h"
#include <stdlib.h>
/**
 * create_file - a function that creates a file.
 * @filename: name of file to created
 * @text_content: text to be added to file created
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	size_t l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content != NULL && text_content[l] != '\0')
	{
		l++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filename, text_content, l);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
