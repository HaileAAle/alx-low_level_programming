#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* more headers goes there
*
* main - Determines either greater than 5, is less than 6, or is 0
*
* betty style doc for function main goes there
*/
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	} else if (i == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
