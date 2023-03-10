#include "main.h"

/**
 * _memcpy - copy n beyts
 * @dest: destination
 * @src: source of beyts
 * @n: amount of beyts to be copied
 * Return: return to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
