#include <stdlib.h>
#include <time.h>
#include <time.h>

/**
* main - print a random number to n and state whether
* it is positive, negative or zero
*everytime it is executed
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
            printf ("%d is positive\n", n);
            else if (n==0)
            printf ("%d is zero\n", n);
            else if (n < 0)
            printf ("%d is negative\n", n);
	return (0);
}
