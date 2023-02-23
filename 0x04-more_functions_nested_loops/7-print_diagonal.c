#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of diagonal lines
 * Return: no return
 *
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(92);
		_putchar('\n');
	i++;
	}
	_putchar('\n');
}
