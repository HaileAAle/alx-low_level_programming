#include <stdio.h>

/**
 * main - Entry point
 * Three combinations of numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int n = '0', m, p;

	while (n <= '7')
	{
		m = n + 1;
		while (m <= '8')
		{
			p = m + 1;
			while (p <= '9')
			{
				putchar(n);
				putchar(m);
				putchar(p++);
				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
