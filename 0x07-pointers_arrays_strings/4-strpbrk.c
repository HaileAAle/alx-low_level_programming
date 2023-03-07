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
	unsigned int i, j;

	for (i = 0; *(s + i) != 0; i++)
	{
		for (j = 0; *(s + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
