#include <stdio.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, m = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			m = m * _atoi(argv[i]);
			printf("%d\n", m);
		}
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
