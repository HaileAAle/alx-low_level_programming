#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Determines last digit either greater than 5, is less than 6, or is 0
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	else if (i == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	return (0);
}
