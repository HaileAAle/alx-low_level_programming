#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if( n == 0 ) {
	/* if n is zero */
	printf("%d", n ); 
	printf(" and is 0" );
} else if( n > 5 ) {
	/* if n is greater than 5 */
	printf("%d", n );
	printf(" and is greater than 5" );
} else {
	/* if n is less than 6 */
	printf("%d", n );
	printf(" and is less than 6 and not 0" );
	} 
return (0); }
