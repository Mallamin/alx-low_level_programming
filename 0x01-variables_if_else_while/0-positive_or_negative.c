#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return - always return 0 (success)
 *
 */

	int main(void)
{
	int n;
	/*srandtime(time(0));*/
	n = rand()-RAND_MAX/2;

	if (n>0)
	printf("%d n is positive\n", n);
	else if (n<0)
	printf("%d n is negative\n", n);
	else
	printf("%d n is zero\n", n);
	return(0);
}
