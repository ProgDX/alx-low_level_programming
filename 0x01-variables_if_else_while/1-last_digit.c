#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %s\n", n, "and is greater than 5");
}
else if (n == 0)
{
printf("Last digit of %d is %s\n", n, "and is zero");
}
else if (0 < n > 6)
{
printf("Last digit of %d is %s\n", n, "and is less than 6 and not 0");
}
return (0);
}
