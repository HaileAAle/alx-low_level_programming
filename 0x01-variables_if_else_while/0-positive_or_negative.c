#include <stdlib.h>
#include <time.h>
#include <studio.h>

/**
* main - Entry point
* Return: 0 Always  (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if(n > 0) {
	/* if n is positive */
	printf("%d is positive\n");
} else if(n == 0) {
	/* if n is equalt to 0 */
	printf("%d is zero\n");
} else {
	/* if n is less than zero */
	printf("%d is negative\n");
	}
return (0); }
