#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: string
 * @c: character in a string
 * Return: to a character pointer or NUll
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*c == *(s + i))
	{
		break;
		if (*(s + i) == '\0')
			return (NUll);
		i++;
	}
	return (s + i);
}
