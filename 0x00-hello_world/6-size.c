#include <stdio.h>
/**
 * main - Program prints the size of various types on it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int I;
	long long int J;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(I));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(J));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
