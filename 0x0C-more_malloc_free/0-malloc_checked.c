#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - check the allocates memory
 * @b: variable the memory reserved
 * Return: to the poiter of the address of the memory
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
