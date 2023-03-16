#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - check the allocates memory
 * @b: variable the memory reserved
 * Return: to the poiter of the address of the memory
 *
 */

void *malloc_checked(unsigned int b)
{
	int *c;

	if (b != '\0')
		c = (int *)malloc(sizeof(b));
	return (c);

	if (c == NULL)
		return (98);
}
