#include <stdio.h>
#include <ctype.h>

/**
*main - Entry
*Description Nothing to descripe
*Return Always 0
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
