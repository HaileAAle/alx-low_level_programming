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
	int i;
	int j;

	for (j = 0; *(src + j) <= '\0'; j++)
	{
		for (i = 0; *(dest + i) != '\0'; i++)
		{
			*(dest + i) = *(src + j);
		}
	}
	return (dest);
}
