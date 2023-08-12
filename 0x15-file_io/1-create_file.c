#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: pointer to file to read from
 * @letters: number of letters to read
 * Return: 0 or w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *b;

	fd = fopen(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	r = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, r);

	free(b);
	fclose(fd);
	return (w);
}
