#include <stdio.h>

/**
 * main - Entry point
 * print alphabets in the reverse order
 * Return: Always (0) success
 */

int main(void)
{
	int n, m;

	n = 48;
	m = 97;
	while (n <= 57)
		putchar(n++);
	while (m <= 102)
		putchar(m++);
	putchar (10);
	return (0);
}
