#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main: value of main begins with zero
*Description: the initiatian is always zer
*for a loop we use while or do while
*Return:0
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n>0){
          printf("Value of n is positive\n");
        }
        else if (n==0){
          printf("Value of n is zero\n");
        }
        else{
          printf("Value of n is negative\n");
	}
	return (0);
}
