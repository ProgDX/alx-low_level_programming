#include "main.h"
/**
*print_alphabet_x10 - make the alphabet 10 times
*Description: print x10
*made facddd
*Return void
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
