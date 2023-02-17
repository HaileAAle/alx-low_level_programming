#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* prints negative zero or positive
* Return: 0 Always  (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		/* if n is positive */
		printf("%d is positive\n", n);
	else if (n == 0)
		/* if n is equalt to 0 */
		printf("%d is zero\n", n);
	else
		/* if n is less than zero */
		printf("%d is negative\n", n);
	return (0);
}
