#include <stdio.h>
/**
 * main - program to print a to z using putchar
 *
 * Return: 0 (Success)
*/
int main(void)
{
        int i;

        for (i = '0' ; i <= '9' ; i++)
        {
                
                if (i != '9')
                {
                        putchar(i);
			putchar(',');
                        putchar(' ');
                }
                else
                {
			putchar(i);
                        putchar('\n');
                }
        }
return (0);
}
