#include <stdlib.h>
#include <time.h>
/**
 *assign a random number to the variable n each time it is executed and print
*/ 
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
printf(%c,": is positive\n")
else (n<0)
printf(%c,": is negative")
else (n==0)
prinf(%c,": is zero")
return (0);
}
