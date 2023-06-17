#include <stdio>
/**
 * main - print a to z followed by A to Z
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char c;
	char C;

	for ((c = 'a' ; c <= 'z' ; c++) (C = 'A' ; C <= 'Z' ; C++))
	{
		putchar(c);
		putchar(C);
	}
putchar('\n')
return (0);
}
