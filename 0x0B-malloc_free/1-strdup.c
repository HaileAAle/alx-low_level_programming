#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates an array of chars,
 * and initializes it with a specific char.
 * @str: string.
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
		s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
