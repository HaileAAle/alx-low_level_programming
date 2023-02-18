#include <studio.h>

/**
 * main - Entry point
 * single digit combination
 * Return:(0)success
 */

int main(void)
{
	int n = '0';

	while (n <= 9)
	{
		putchar(n);
		if (n++ != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
