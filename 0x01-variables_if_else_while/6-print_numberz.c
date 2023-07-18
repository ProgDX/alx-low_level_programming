#include <stdio.h>
#include <ctype.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program printsProgramming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
int num;
 for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar("\n");
return (0);
}
