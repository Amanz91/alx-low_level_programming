#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that reads a text file and prints it to STD output.
 * @filename: file to read from
 * @letters: no. of letters to read from file
 * Return: 0 or wr1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd1, wr1;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	rd1 = read(fd, buf, letters);
	wr1 = write(STDOUT_FILENO, buf, rd1);

	free(buf);
	close(fd);
	return (wr1);
}
