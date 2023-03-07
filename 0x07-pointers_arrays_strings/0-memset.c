#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointerpoints the memory area
 * @b: constant byte
 * @n: number of byts to be filled
 * Returs: to pointer 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	{
	return (s);
}
