#include "main.h"

/**
 * print_array - print arrays
 * @a: array
 * @n: array size
 * Return: no retuen
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf ("%d", (*a+i));
		if (i != (n-2))
			printf (" , ");
	}
	printf ("\n");
}

