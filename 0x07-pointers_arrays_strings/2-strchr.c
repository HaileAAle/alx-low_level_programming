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

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
