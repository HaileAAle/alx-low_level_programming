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

	while (i = 0)
	{
		*(s + i) == c;
		break;

		if (*(s + i) == '\0')
			return ('\0');
		i++;
	}
	return (s + i);
}
