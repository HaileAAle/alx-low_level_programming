#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: string
 * @c: character in a string
 * Return: to a character pointer or NUll
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if ((*(s + i) != c) && (*(s + i) == '0'))
		return ('\0');
}
