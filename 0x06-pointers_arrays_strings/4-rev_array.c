#include "main.h"

/**
 * reverse_array - revers an array
 * @a: array pointer
 * @n: array size
 * Return: no return value
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
		_putchar("%d", *a[n - i]);
	i++;
}
