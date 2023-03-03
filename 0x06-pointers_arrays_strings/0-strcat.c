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

	for (; (*(src + j)) <= '\0'; j++)
	{
		for (; *(dest + i) != '\0'; i++)
		{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		}
	break;
	}
	return (dest);
}
