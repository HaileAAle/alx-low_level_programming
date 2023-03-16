#include "main.h"

/**
 *_calloc -allocated memoria for nmeb elemn de zise bytes
 *@nmemb: number of element in the array
 *@size: bytes for each position in array
 *Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *A;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	A = malloc(size * nmemb);

	if (A == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		A[i] = 0;

	return (A);
}
