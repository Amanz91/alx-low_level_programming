#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * f_close - a function to close file
 * @f_name: fd to file to close
 * Return: nothing
 */
void f_close(int f_name)
{
	int x;

	x = close(f_name);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				f_name);
		exit(100);
	}
}
/**
 * f_error - a function to check if file is opened
 * @file_from: fd to file to open
 * @file_to: fd to file to open
 * @argv: name of file
 * Return: nothing
 */
void f_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
		exit(99);
	}
}
/**
 * main - a function to copy file
 * @argc: number of arguments
 * @argv: file name of origin and destination
 * Return: 0 or error codes 97, 98, 99 and 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	f_error(file_from, file_to, argv);
	r =  1024;

	while (r == 1024)
	{
		r = read(file_from, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]);
			exit(98);
		}
		w = write(file_to, buf, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			exit(99);
		}
	}
	f_close(file_from);
	f_close(file_to);
	return (0);
}
