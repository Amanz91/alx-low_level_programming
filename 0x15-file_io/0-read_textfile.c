#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to STD output.
 * @filename: file to read from
 * @letters: no. of letters to read from file
 * Return: 0 or wr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buf;

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	rd = (fd, buf, letters);
	wr = (STDOUT_FILENO, buf, letters);

	free(buf);
	close(fd);
	return (wr);
}
