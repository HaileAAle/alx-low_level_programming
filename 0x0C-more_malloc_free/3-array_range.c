#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * max - min +1);

	for (i = 0; i <= max - 1; i++)
		p[i] = min + i++;
	if (p == NULL)
		return (NULL);
	return (p);
}
