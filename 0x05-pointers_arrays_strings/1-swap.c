#include "main.h"

/**
 * swap_int - swaps two intergers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	
	*a = *b;
	*b = c;
}
