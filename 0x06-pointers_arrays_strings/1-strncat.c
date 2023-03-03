#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string destination.
 * @src: second string source.
 * @n: at most n bytes from src
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) <= 'n')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
