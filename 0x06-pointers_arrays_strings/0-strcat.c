#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: to *dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) <= '\0')
	{
		break;
		*(dest + i) = *(src + j);
	}
	return (dest);
}
