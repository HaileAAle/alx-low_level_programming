#include <stdio.h>

/**
* main - Entry point
* print single digit numbers
* Return: Always 0 (success)
*/
int main(void)
{
	int n = '0';

	while (n <= '9')
		putchar (n++);
	putchar (10);
	return (0);
}
