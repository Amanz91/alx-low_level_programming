#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, __attribute__ ((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
