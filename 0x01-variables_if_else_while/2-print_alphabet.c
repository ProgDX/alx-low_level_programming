#include <stdio.h>
#include <ctype.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program printsProgramming is like building a multilingual puzzle
* Return: 0
*/
int main()
{
for(int x = 'A'; x <= 'Z'; x++) /* jumps from 'A'(65) to 'B'(66) to ... in order.*/
{
char small = tolower(x);
putchar(small);
}
return 0;
}
