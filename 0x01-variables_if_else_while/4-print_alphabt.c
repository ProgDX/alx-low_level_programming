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
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{
putchar(lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
