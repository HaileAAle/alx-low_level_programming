#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: the given number
 * Return: factorial result
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
