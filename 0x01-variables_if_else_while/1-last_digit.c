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
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d %s\n", n, x, "and is 0");
}
else if ((n < 6) && (n != 0))
{
printf("Last digit of %d is %d %s\n", n, x, "and is less than 6 and not 0");
}
else if (n == 0)
{
printf("Last digit of %d is %d %s\n", n, x, "and is greater than 5");
}

return (0);
}
