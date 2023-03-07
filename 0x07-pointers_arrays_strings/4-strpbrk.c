#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: the string
 * @accept: the required accept
 * Return: the pointer s
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; *(s + i) != 0; i++)
	{
		if (*(s + i) == accept)
			break;

		if (*(s + i) = '\0')
			break;

		return ('\0');
	}
	return (s + i);
}
