#include <unistd.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program printsProgramming is like building a multilingual puzzle
* Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
